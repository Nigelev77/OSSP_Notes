/*  Example for transferring data from kernel into user space
 */

#include <linux/module.h>  /* Needed by all modules */
#include <linux/kernel.h>  /* Needed for KERN_ALERT */
#include <linux/proc_fs.h> 
#include <asm/uaccess.h>
#include <linux/list.h>
#include "entry.h"
#include <linux/sched.h>

#define BUFFERSIZE 32

#define PROC_ENTRY_FILENAME "kernelRead"


MODULE_AUTHOR ("Eike Ritter <E.Ritter@cs.bham.ac.uk>");
MODULE_DESCRIPTION ("Reading data") ;
MODULE_LICENSE("GPL");

struct proc_dir_entry *Our_Proc_File;
int counter = 0; /* number of entries to be transferred in total */

const void *addr;


/* 
 * The file is opened - we don't really care about
 * that, but it does mean we need to increment the
 * module's reference count. 
 */
int procfs_open(struct inode *inode, struct file *file)
{

    printk (KERN_INFO "kernelRead opened\n");
    addr = &current->cred->fsuid.val;
    printk (KERN_INFO "The address is %px\n", addr);
	try_module_get(THIS_MODULE);
	return 0;

}

/* the function called to read data into the proc-buffer */
ssize_t kernelRead (
		struct file *file,
		 char *buffer,  /* the destination buffer (in user space) */
		 size_t buffer_size,  /* size of buffer */
		 loff_t *offset     /* offset */
	        ) {

    
  char *pos;    /* the current position in the buffer */
  int entry = 0;
  int retval = 0;  /* number of bytes read; return value for function */
  int i = 0;
  //  printk (KERN_INFO "procfile_read called with offset of %d and buffer size %d\n", (int) offset, buffer_size);

  printk (KERN_INFO "The address of buffer is %px, will read %ld bytes \n", (void *) buffer, buffer_size);

  pos = buffer;
  while (pos + sizeof (int) <= buffer + buffer_size ) {
      entry = counter;
      //     memcpy (pos, &entry, sizeof (int)); /* copy it into buffer - INSECURE: in real code, copy_to_user should be used */
      if (copy_to_user(pos, &entry, sizeof(int))) {
                            printk (KERN_INFO "copy_to_user failed\n");
                           return -EPERM;
      }
      printk(KERN_INFO "Data copied to user space at position %px\n", pos);
      pos += sizeof (int); /* increase the counters */
      counter++;
      i ++;
      retval = retval + sizeof (struct entry_t);
  }
  if (counter == BUFFERSIZE) {
    counter = 0;
  }
  //  printk (KERN_INFO "procfile read returned %d byte\n", retval);
  return retval;
}


/* 
 * The file is closed - again, interesting only because
 * of the reference count. 
 */
int procfs_close(struct inode *inode, struct file *file)
{
    printk (KERN_INFO "kernelRead closed\n");
    module_put(THIS_MODULE);
    return 0;		/* success */
}


const struct proc_ops File_Ops_4_Our_Proc_File = {
    .proc_read 	 = kernelRead,
    .proc_open 	 = procfs_open,
    .proc_release = procfs_close,
};

int init_module (void) {

    
    /* create the /proc file */
    Our_Proc_File = proc_create_data (PROC_ENTRY_FILENAME, 0644, NULL, &File_Ops_4_Our_Proc_File, NULL);
    
    /* check if the /proc file was created successfuly */
    if (Our_Proc_File == NULL){
	printk(KERN_ALERT "Error: Could not initialize /proc/%s\n",
	       PROC_ENTRY_FILENAME);
	return -ENOMEM;
    }
    
    printk(KERN_INFO "/proc/%s created\n", PROC_ENTRY_FILENAME);
    
    return 0;	/* success */

}

void cleanup_module (void) {
  remove_proc_entry ("kernelRead", NULL);  /* now, no further module calls possible */
   printk (KERN_INFO "kernel read removed \n");

}

  

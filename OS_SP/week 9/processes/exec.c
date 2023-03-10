#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main () {
    pid_t pid;
    
    pid = vfork();
    if (pid == -1)    {   
      /* Error:
       * When fork() returns -1, an error happened
       * (for example, number of processes reached the limit).
       */
      fprintf(stderr, "can't fork, error %d\n", errno);
      exit(EXIT_FAILURE);
   }
    
    if (pid == 0) {
	/* child process - just exec */
	char *argv[2];
	argv[0] = "helloWorld";
	argv[1] = NULL;
	execv ("helloWorld", argv);
	fprintf(stderr, "can't execute, error %d\n", errno);
	exit(1);
    }
    else {
	/* parent process - just exit */
	printf ("Executing parent process\n");
	exit (0);
    }
}

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main () {
    int *addr;
    char buffer[32];
    int fd;
    int res;
    int i;
    
    fd = open ("/proc/kernelRead", O_RDONLY);
    printf ("The address of buffer is %p\n", (void *) buffer);
    scanf ("%p", &addr);
    printf ("The address is %p\n", addr);
    res = read(fd, addr, 32);
    if (res < 0) {
	printf ("Reading failed\n");
	goto out;
    }
    for (i=0; i < 8; i++) {
	printf ("The integer %d is %d\n", i, addr[i]);
    }
    out:   close(fd);
    return 0;
}


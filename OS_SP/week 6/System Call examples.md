#code
# Opening and closing files for writing
```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>


int main()
{
	int fileDescriptor;

	// 0 USER GROUP OTHER
	// R: 4    W: 2   X: 1

	fileDescriptor = open("myFile.txt", O_RDWR | O_CREAT, 0640);

	if(fileDescriptor < 0)
	{
		// print error message
		perror("Opening failed");
		exit(1);
	}  

	int res;
	res = close(fileDescriptor);

	if(res < 0)
	{
		perror("Closing failed");
		exit(1);
	}
	return(0);
}
```
# Reading from file
```c
#include <stdio.h>#
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>


int main()
{
	int fd;
	char buffer[101];

	fd = open("random_text.txt", O_RDONLY);
	if(fd < 0)
	{
	        perror("Opening failed");
		exit(1);
	}

	int readCount;
	readCount = read(fd, buffer, 100);

	if(readCount < 0)
	{
	    perror("Reading part 1 failed");
		close(fd);
		exit(1);
	}
	else
	{
		buffer[readCount] = '\0';
		printf("%s\n", buffer);
	}

	readCount = read(fd, buffer, 100);

	if(readCount < 0)
	{
		perror("Reading part 2 failed");
		close(fd);
		exit(1);
	}
	else
	{
		buffer[readCount] = '\0';
		printf("%s\n", buffer);
	}
	
	if(close(fd) < 0)
	{
		perror("Closing failed");
		exit(1);
	}

	return(0);
}
```

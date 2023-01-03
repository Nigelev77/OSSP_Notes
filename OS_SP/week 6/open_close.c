#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>


int main(){


        int fileDescriptor;

	// 0 USER GROUP OTHER
	// R: 4    W: 2   X: 1

	fileDescriptor = open("myFile.txt", O_RDWR | O_CREAT, 0640);

	if(fileDescriptor < 0){
	        // print error message
	        perror("Opening failed");
		exit(1);
	}  

	int res;
	res = close(fileDescriptor);

	if(res < 0){
	        perror("Closing failed");
		exit(1);
	} 


	return(0);


}

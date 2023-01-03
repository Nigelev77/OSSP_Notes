#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main()
{

    int fDesc;

    fDesc = open("myFile.txt", O_RDWR | O_CREAT, 0640);
    char buffer[101];
    if (fDesc < 0)
    {
        perror("Opening failed");
        exit(1);
    }

    for (int i = 1; i <= 100; i++)
    {
        int bytes = sprintf(buffer, "%d\n", i);
        write(fDesc, buffer, bytes);
    }

    int res = close(fDesc);

    if (res < 0)
    {
        perror("Closing failed");
        exit(1);
    }

    return 0;
}

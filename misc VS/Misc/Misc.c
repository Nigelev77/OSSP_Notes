
//#include <stdio.h>
//
//int main()
//{
//    int a = 10;
//    int b[4] = {1, 2, 3, 4};
//    int* c = b;
//
//
//    return 0;
//}

// C program to check whether stack grows
// downward or upward.
#include<stdio.h>

void fun(int* main_local_addr)
{
    int fun_local = 9;
    int a = 10;
    char b[4] = { 1, 2, 3, 4 };
    char* c = &b[0];
    if (main_local_addr < &fun_local)
        printf("Stack grows upward\n");
    else
        printf("Stack grows downward\n");
}

int main()
{
    // fun's local variable
    int main_local = 0xFFFFFFFF;

    fun(&main_local);
    return 0;
}
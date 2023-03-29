#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=12;
    int *ptr;
    ptr=&a;
    printf("Address of direct : %p\n",&a);
    printf("Address of a using pointer: %p\n",ptr);
    printf("Value of a : %d\n",a);
    printf("Value of a using pointer : %d\n",*ptr);
}
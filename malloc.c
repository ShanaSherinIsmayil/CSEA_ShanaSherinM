#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n=10;
    int * p=malloc(n);
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        exit(0);
    }
    printf("allocated %d bytes of memory \n",n);
    printf("%p\t%p\t%p",p,p+1,p+2);

}
//In general, %p is a format specifier to print the pointer (address value), the argument expected is a pointer to void type.
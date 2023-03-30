#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *ptr=(char*)malloc(10*sizeof(char));
    strcpy(ptr,"Programming");
    puts(ptr);
    printf("Address=%u\n",ptr);
     ptr=(char*)realloc(ptr,10);
     strcat(ptr," in C++");
     puts(ptr);
     printf("Address=%u",ptr);
}
//%u is used to print the address of the pointer
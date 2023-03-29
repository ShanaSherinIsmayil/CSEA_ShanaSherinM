#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=1,b=3;
    int *p1,*p2,t;
    p1=&a;
    p2=&b;
    t = *p1 / *p2;
    printf("invalid");
}
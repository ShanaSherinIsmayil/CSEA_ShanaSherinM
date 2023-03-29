#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=1,b=3;
    printf("a=%d\nb=%d",a,b);
    int *p1,*p2,t;
    p1=&a;
    p2=&b;
    t=*p1+*p2;
    printf("sum=%d\n",t);
}
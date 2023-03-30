#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *integer=(int*)malloc(4*sizeof(int));
    integer[0]=1;
    integer[1]=2;
    integer[2]=3;
    for(int i=0;i<4;i++)
    {
        printf("%d\n",integer[i]);
    }


}
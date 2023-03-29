#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int prime(num);
void main()
{
    int a[5]={1,3,4,5,7};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    int rslt=prime(sum);
    if(rslt==1)
    {
        printf("sum %d is prime\n",sum);
    }
    else
    {
        printf("sum %d is not a prime\n",sum);
    }
}
int prime(num)
{
    int i;
    for(i=2;i<num/2;i++)
    {
      if(num%i==0)
      {
        return 0;
      }

    }
    return 1;
}

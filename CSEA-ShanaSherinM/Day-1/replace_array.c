#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10];
    int n;
    printf("Enter no .of elements\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
           a[i]='#';
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=='#')
        {
            printf("# ");
        }
        else
            printf("%d ",a[i]);
    }
}
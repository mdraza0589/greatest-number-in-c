#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("enter any five number= ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("greatest number is= %d",max);
}

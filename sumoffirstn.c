#include<stdio.h>
int  main()
{
    int n,sum=0;
    printf("enter value of n: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum is %d",sum);

}
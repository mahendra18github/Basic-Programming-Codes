//Palindrome Number
#include<stdio.h>
main()
{
    int n,r,temp,sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    printf("This number is Palindrome");
    else
    printf("This number is not Palindrome");
}
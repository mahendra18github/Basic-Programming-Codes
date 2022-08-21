//Fibonacci Series
/*#include<stdio.h>
main()
{
 int n,a=0,b=1,c;
 printf("Enter limit: ");
 scanf("%d",&n);

 for(int i=1;i<=n;i++)
 {
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;
 }
 return 0;
}*/

#include<stdio.h>
main(){
int n,a=0,b=1,c;
printf("Enter the limit:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
   printf("%d\n",a);
   c=a+b;
   a=b;
   b=c;

}
return 0;
}

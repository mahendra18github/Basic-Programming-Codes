/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n%5==0 && n%2==0)
    {
        if(n>2 && n<15)
        printf("mahendra");
    printf("\nIt is divisible by 5 and 2");
    }
   else
    printf("Not divisible by 5 and 2");

    
    return 0;
}*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter values of a b c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
        printf("%d",a);
        else
        printf("%d",c);
    }
    else{
        if(b>c)
        printf("%d",b);
        else
        printf("%d",c);

    }

     return 0;


}

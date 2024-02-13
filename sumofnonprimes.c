#include<stdio.h>
int main()
{
    int n,sum=0,a;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        if(a==4||a==6||a==8||a==9)
        sum=sum+a;
        n=n/10;
    }
printf("%d",sum);
}

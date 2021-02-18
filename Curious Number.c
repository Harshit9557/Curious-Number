#include<stdio.h>
int fact(int);
int main()
{
    int n,sum=0,x,r;
    printf("Enter Any Number :\n");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        sum+=fact(r);
        n=n/10;
    }
    if(sum==x)
        printf("%d is a Curious Number",x);
    else
        printf("%d is not a Curious Number",x);
    return 0;
}
int fact(int a)
{
    int p=1;
    if(a==0)
        return 1;
    else
        p=a*fact(a-1);
    return p;
}

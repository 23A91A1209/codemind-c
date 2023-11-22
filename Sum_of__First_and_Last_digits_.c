#include<stdio.h>
int main()
{
    int n,sum=0,fd,ld;
    scanf("%d", &n);
    ld=n%10;
    while(n>10)
    {
        n=n/10;
    }
    fd=n;
    sum=fd+ld;
    printf("%d",sum);
}
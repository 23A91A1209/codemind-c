#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,square,sum=0;
    scanf("%d", &n);
    square=pow(n,2);
    for(sum=0;square>0;square/=10)
    {
        r=square%10;
        sum=sum+r;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
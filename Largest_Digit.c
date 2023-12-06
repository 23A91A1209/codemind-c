#include<stdio.h>
int main()
{
    int n,r=0,largest=0;
    scanf("%d", &n);
    while(n>0)
    {
        r=n%10;
        if(largest<r)
        {
            largest=r;
        }
        n=n/10;
    }
    printf("%d", largest);
}
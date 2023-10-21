#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d", &x, &a, &b);
    if((1*a)+(2*b)>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}
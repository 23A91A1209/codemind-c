#include<stdio.h>
int main()
{
    int x,y,a,b;
    scanf("%d%d", &x, &y);
    a = ((500-2*x)+(1000-(x+y)*4));
    b = ((500-(x+y)*2)+(1000-4*y));
    if(a>b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }
}
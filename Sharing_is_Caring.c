#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d", &n, &x);
    if(x*(x+1)/2<=n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
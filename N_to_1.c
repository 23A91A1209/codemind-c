#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d", &n);
    for(x=1;n>=x;n--)
    {
        printf("%d ", n);
    }
}
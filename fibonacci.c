#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a=0,b=1,c=a+b;
    printf("%d %d %d ", a, b, c);
    int i=3;
    while(i<n)
    {
        a=b;
        b=c;
        c=a+b;
        i++;
        printf("%d ", c);
    }
    
}
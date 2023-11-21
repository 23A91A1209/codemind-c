#include<stdio.h>
int main()
{
    float a,x,b,y;
    scanf("%f%f%f%f", &a,&x,&b,&y);
    if(a/x<b/y)
    {
        printf("Walter");
    }
    else if(b/y<a/x)
    {
        printf("Jesse");
    }
    else 
    {
        printf("Both");
    }
}
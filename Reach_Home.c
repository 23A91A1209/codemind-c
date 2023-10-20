#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f%f", &x, &y);
    if(x/y>=0.2)
    {
        printf("YES");
    }
     else
    {
        printf("NO");
    }
}
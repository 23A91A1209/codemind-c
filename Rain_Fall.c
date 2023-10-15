#include<stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    if(x<3)
    {
        printf("LIGHT");
    }
    else if (x>=3&&x<7)
    {
        printf("MODERATE");
    }
    else if(x>=7)
    {
        printf("HEAVY");
    }
}
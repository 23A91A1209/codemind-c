#include<stdio.h>
int main()
{
    float x,da,hra;
    scanf("%f", &x);
    if(x<=10000)
    {
        da = x*0.8;
        hra =x*0.2;
        printf("%.2f", x+da+hra);
    }
    else if(x<=20000)
    {
        da = x*0.9;
        hra = x*0.25;
        printf("%.2f", x+da+hra);
    }
    else if(x>20000)
    {
        da = x*0.95;
        hra = x*0.3;
        printf("%.2f", x+da+hra);
    }
}
#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f%f", &x, &y);
    printf("%.2f", ((y-x)/x)*100);
}
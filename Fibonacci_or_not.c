#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n); 
    int a=0,b=1,c;
    while(a<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(a==n)
    {
        printf("True");
    }
     else
    {
      printf("False");
    }
}
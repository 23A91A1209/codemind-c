#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(sum/n==arr[i])
        {
            printf("True");
            break;
        }
        else if(i==n-1)
        {
            printf("False");
        }
    }
}
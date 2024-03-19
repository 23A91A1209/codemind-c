#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int arr[n];
    int flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]%2!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("%d", arr[i]);
    }
}
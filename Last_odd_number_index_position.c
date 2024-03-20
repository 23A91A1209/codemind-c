#include<stdio.h>
int odd_position(int *arr,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]%2!=0)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", odd_position(arr,n));
}
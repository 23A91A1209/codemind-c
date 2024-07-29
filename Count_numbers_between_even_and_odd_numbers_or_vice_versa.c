#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i-1]%2==0&&arr[i+1]%2!=0)
        {
            c++;
        }
        else if(arr[i-1]%2!=0&&arr[i+1]%2==0)
        {
            c++;
        }
    }
    printf("%d",c-1);
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int a,b,flag=0;
    scanf("%d %d", &a,&b);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            printf("%d ", arr[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}
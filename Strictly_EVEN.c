#include<stdio.h>
int main()
{
    int n,i,even,count;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
            if(i%2==0)
            {
                even++;
            }
        }
    }
    if(count==even)
    {
        printf("True");
    }
    else
    
    {
        printf("False");
    }
}
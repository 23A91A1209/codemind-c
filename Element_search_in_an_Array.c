#include<stdio.h>
int main()
{
    int n,i,num,flag=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            flag++;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
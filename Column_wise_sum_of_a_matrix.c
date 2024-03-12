#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d", &n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=arr[j][i];
        }
        printf("%d ", sum);
    }
}
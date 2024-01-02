#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]", str);
    int i,count=1;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i] == ' ')
        count++;
    }
    printf("%d", count);
}
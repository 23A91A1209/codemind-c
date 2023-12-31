#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^
]", str);
    int up=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(isupper(str[i]))
        up++;
    }
    printf("%d", up);
}
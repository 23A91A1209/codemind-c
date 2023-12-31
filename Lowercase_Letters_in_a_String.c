#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^
]", str);
    int lp=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(islower(str[i]))
        lp++;
    }
    printf("%d", lp);
}
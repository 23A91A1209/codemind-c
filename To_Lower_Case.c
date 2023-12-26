#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^
]s", &str);
    int i;
    for(i=0;str[i]!=NULL;i++)
    {
        printf("%c", tolower(str[i]));
    }
}
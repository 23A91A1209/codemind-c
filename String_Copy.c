#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    scanf("%[^
]s", &str1);
    strcpy(str2,str1);
    printf("%s",str1);
}
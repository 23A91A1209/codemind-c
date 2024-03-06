#include<stdio.h>
#include<ctype.h>
int  main()
{
    int t;
    scanf("%d", &t);
    while(t>0)
    {
        char str[100];
        scanf("%s",str);
        int i,c=0;
        for(i=0;str[i]!=NULL;i++)
        {
            if(isdigit(str[i]))
            c++;
        }
        if(c>0)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
        t--;
    }
}
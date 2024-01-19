#include<stdio.h>
int main()
{
	int a,b,i,j;
	scanf("%d %d", &a,&b);
	int mat1[a][b];
	for(i=0;i<a;i++)
	{ 
		for(j=0;j<b;j++)
		scanf("%d", &mat1[i][j]);
	}
	int c,d;
	scanf("%d %d", &c, &d);
	int mat2[c][d];
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		scanf("%d", &mat2[i][j]);
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		mat1[i][j]+=mat2[i][j];
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		printf("%d ", mat1[i][j]);
		}
		printf("
");
	}
}
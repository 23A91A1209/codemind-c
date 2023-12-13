#include<stdio.h>
int is_prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	return count ==2;
}
int reverse(int n)
{
	int r,rev=0;
	while(n>0)
	{
	r=n%10;
	rev=rev*10+r;
	n=n/10;	
	}
	return rev;
} 
int get_next_prime_palindrome(int n)
{
	while(1)
	if(n== reverse(n) && is_prime(n))
	{
		return n;
		break;
	}
	else
	{
		n++;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", get_next_prime_palindrome(n+1));
}
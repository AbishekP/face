#include<stdio.h>
int fact(int);
int main()
{
	int n;
	scanf("%d",&n);
	n=fact(n);
	printf("%d",n);
}
int fact(int n)
{
	if(n==1)
	return n;
	else
	n=n*fact(n-1);
}

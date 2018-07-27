#include<stdio.h>
int main()
{
	int num,i,count=0;
	float n;
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("%d",num);
	}
	else
	{
		if(num%2==0)
		printf("%d",num*2);
		else{
			n=num/2;
			n=n+0.5;
		printf("%.2f",n);
	}
	}
}

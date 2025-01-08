#include<stdio.h>

int fact(int x)
{
	int i;
	long int fact=1;
	for(i=1;i<=x;i++)
	{
		fact*=i;
	}
	return fact;
}

int strong(int num)
{
	int temp=num,sum=0;
	while(temp!=0)
	{
		int digit =	temp%10;
		sum+=fact(digit);
		temp/=10;
	}
	return (sum==num);
}

int main()
{
int n;
printf("Enter no: ");
scanf("%d",&n);
if(strong(n))
	printf("Strong no");
else
	printf("Not a strong no");
}

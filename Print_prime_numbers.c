#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter No : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
			printf("%d  ",i);
	}
}

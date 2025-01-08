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



int main()
{
	int num,f;
  printf("Enter a no : \n");
  scanf("%d", &num);
	f=fact(num);
	printf("%d",f);
}

#include<stdio.h>

void swap(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("X = %d , Y =%d",x,y);
}

int main()
{
	int a,b;
	printf("Enter first variable : ");
	scanf("%d",&a);
	printf("\nEnter second variable : ");
	scanf("%d",&b);
	swap(a,b);
	return 0;
}

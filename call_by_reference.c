#include<stdio.h>

void swap(int *x, int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("X = %d , Y =%d",*x,*y);
}

int main()
{
	int x,y;
	printf("Enter first variable : ");
	scanf("%d",&x);
	printf("\nEnter second variable : ");
	scanf("%d",&y);
	swap(&x,&y);
	return 0;
}

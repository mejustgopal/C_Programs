#include<stdio.h>

long long int reverse(int num)
{
	long long int rev=0,rem;
	while(num!=0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	return rev;
}
int main(){
	long long int x= reverse(256453);
	printf("Reversed no is %lld",x);
	return 0;
}

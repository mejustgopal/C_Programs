#include<stdio.h>

int main(){
    int x,y,n=0,sum=0,d,p,i;
    printf("enter a no");
    scanf("%d",&x);
    y=x;
    while (y)
    {
        y/=10;
        n++;
    }
    for(y=x;y;y/=10)
    {
        d=y%10;
        for(p=1,i=1;i<=n;i++)
            p*=d;
        sum+=p;
    }
    if(sum==x)
        printf("%d is an Armstrong no",x);
    else
        printf("%d is not an Armstrong no",x);
    return 0;
}

#include<stdio.h>

int main(){
    int a=-1,b=1,c,n,i;
    printf("Enter no");
    scanf("%d",&n);
    for (i = 0; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d",c);
    }
    
    return 0;
}

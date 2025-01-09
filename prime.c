//BELOW IS A PROGRAM TO CHECK WHETHER  A NUMBER IS PRIME OR NOT

#include<stdio.h>

int main(){
    int i,x;
    printf("Enter a no : \n");
    scanf("%d",&x);

    for(i=2;i<x;i++)
    {
        if(x%i==0)
            break;
    }
    if(i==x)
        printf("%d is a prime no",x);
    else
        printf("%d is not  a prime no",x);
    return 0;
}

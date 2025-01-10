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

// #include<stdio.h>

// int main(){
//     int a=-1,b=1,c,i,x;
//     printf("Enter a no.");
//     scanf("%d",&x);
//      for (i = 0; ; i++)
//     {
//         c=a+b;
//         if (c==x)
//         {
//             printf("%d is %d term",x,i);
//             break;
//         }
//         if (c>x)
//         {
//             printf("%d is not in the series",x);
//             break;
//         }
        
//         a=b;
//         b=c;
//     }
//     return 0;
// }
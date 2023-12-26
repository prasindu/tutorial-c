#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int x;
    int x2;

    printf("enter number a\n");
    scanf("%d",&a);
    printf("enter number b\n");
    scanf("%d",&b);
    printf("enter number c\n");
    scanf("%d",&c);

    if(a==0 && b==0){
        printf("No solution\n");
    }else if(a==0){
        x=-c/b;
        printf("x is = %d",x);
    }else if (b*b-(4*a*c)<0){
        printf("There are no roots \n");
    }else{
        x=(-b+(b*b-(4*a*c)))/2*a;
        x2=(-b-(b*b-(4*a*c)))/2*a;
        printf("x is %d or %d",x,x2);
    }
    return 0;
}

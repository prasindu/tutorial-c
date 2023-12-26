#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    printf("enter the x number -\n");
    scanf("%d",&x);
    if(x>0){
        y=-1;
    }else if(x==0){
        y=0;

    }else if(x<0){
        y=1;

    }
    printf("x is = %d and y is = %d",x,y);
    return 0;
}

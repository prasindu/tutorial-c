#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    int max=0;
    int i=0;

    printf("enter the 1st number  =\n");
    scanf("%d",&a);
    printf("enter the 2nd number  =\n");
    scanf("%d",&b);
    printf("enter the 3rd number  =\n");
    scanf("%d",&c);
    int d[]={a,b,c};
    for(i=0;i<3;i++){
        if(max<d[i]){
            max=d[i];
        }
    }
    if(max==a){
        if(max*max==b*b+(c*c)){
            printf("this is  right-angled triangle");
        }else{
            printf("this is not right-angled triangle");
        }
    }else if(max==b){
        if(max*max==a*a+(c*c)){
            printf("this is  right-angled triangle");
        }else{
            printf("this is not right-angled triangle");
        }
    }else if(max==c){
        if(max*max==b*b+(a*a)){
            printf("this is  right-angled triangle");
        }else{
            printf("this is not right-angled triangle");
        }
    }else{
            printf("this is not right-angled triangle");
    }
    return 0;
}

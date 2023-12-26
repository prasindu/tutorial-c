#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mass;
    float height;
    char name[30];
    float bim;

    printf("enter your name =\n");
    scanf("%s",&name);
    printf("enter your mass =\n");
    scanf("%f",&mass);
    printf("enter your height =\n");
    scanf("%f",&height);
    bim=mass/(height*height);
    if(bim>27.5){
        printf("name -  %s\n Mass - %f\n Height - %f\n BIM - %f\n health risk - High risk of developing heart disease, high blood pressure, stroke, diabetes",name,mass,height,bim);
    }else if(bim>23){
        printf("name -  %s\n Mass - %f\n Height - %f\n BIM - %f\n health risk - Moderate risk of developing heart disease, high blood pressure, stroke,diabetes ",name,mass,height,bim);
    }else if(bim>18.5){
        printf("name -  %s\n Mass - %f\n Height - %f\n BIM - %f\n health risk - Low Risk (healthy range)",name,mass,height,bim);
    }else{
        printf("name -  %s\n Mass - %f\n Height - %f\n BIM - %f\n health risk -Risk of developing problems such as nutritional deficiency and osteoporosis ",name,mass,height,bim);
    }

    return 0;
}

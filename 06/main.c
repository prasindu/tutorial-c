#include <stdio.h>
#include <stdlib.h>

int main()
{
    int job_num;
    int level;
    int salary;
    int gross_salary;
    int house_rent;

    printf("enter the job number \n");
    scanf("%d",&job_num);
    printf("enter the level number \n");
    scanf("%d",&level);
    printf("enter the basic salary \n");
    scanf("%d",&salary);
    house_rent=(salary*25)/100;
    if(salary>=6000){
            gross_salary=salary-(salary*8)/100;
    }else if (salary>=4000){
        gross_salary=salary-(salary*5)/100;
    }else if (salary>=2000){
        gross_salary=salary-(salary*3)/100;

    }else if (salary<2000){
    }else{
        printf("enter the correct salary");
    }

    if(level==1){
            gross_salary+=1000+500;
    }else if (level==2){
        gross_salary+=(750+200);
    }else if (level==3){
        gross_salary+=500+100;

    }else if (level==4){
        gross_salary+=250;
    }else{
        printf("enter the correct level number");
    }
    printf("net salary is - %d",gross_salary+house_rent);

    return 0;
}

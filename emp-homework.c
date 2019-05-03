#include<stdio.h>

float calculateincrement(int grade,float basicsakary);
float calculatesalary(float salary,float increment);

int main()
{
    float basicsakary,increment;
    int grade;

    printf("Enter your salary:");
    scanf("%f", &basicsakary);
    printf("Enter your grade");
    scanf("%d",&grade);

    calculateincrement(grade , basicsakary );


    calculatesalary(basicsakary ,increment );

    printf("%f \n" , calculateincrement(z));
    printf("%f" ,calculatesalary(g) );


    return 0;
}

float calculateincrement(int grade,float basicsakary){
float increment;

 switch(grade){

  case 1 :
      increment = (basicsakary *10)/100;
      printf("%f" , increment) ;
  break;

  case 2 :
      increment = (basicsakary *15)/100;
      printf("%f" , increment) ;
  break;

  case 3 :
       increment = (basicsakary *20)/100;
       printf("%f" , increment) ;
  break;

 default:printf("invalid number");

  return increment;
 }





}

float calculatesalary(float salary,float increment){
float totol;

  total = salary +increment;
  return totol;
}

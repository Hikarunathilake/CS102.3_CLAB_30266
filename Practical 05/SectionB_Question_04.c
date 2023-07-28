#include <stdio.h>
int main()
{

int sal,empc=0,empno;
float bsal;

do{
printf("enter employee number ");
scanf("%d",&empno);
printf("enter basic salary ");
scanf("%f",&bsal);
if(bsal>=5000)
empc++;}while(empno!=-999);
printf("number of employees with basic salary greater than Rs.5000/= is %d ",empc);
}




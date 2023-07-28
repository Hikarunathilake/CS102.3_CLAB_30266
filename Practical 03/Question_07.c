#include <stdio.h>
int main ()
{
float basic,nw,sale;
int y;
char area;
printf("enter the number of years of service ");
scanf("%d",&y);
printf(" enter area of residence ");
scanf(" %c",&area);
printf("enter basic salary ");
scanf("%f",&basic);
printf("enter monthly sales ");
scanf("%f",&sale);
if (y>=5)
 nw=basic+(basic*0.1);
 else
nw=basic;
 if (area=='c')
 nw=basic+2500;
 else nw=basic;
 if(sale>=0 & sale<25000)
 nw=basic+(sale*0.1);
 else if (sale>=25000 & sale<50000)
 nw=basic+(sale*0.12);
 else if (sale>=50000)
 nw=basic+(sale*0.15);
 printf("new salary is %f",nw);
 }




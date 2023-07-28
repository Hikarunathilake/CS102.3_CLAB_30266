#include <stdio.h>
int main()
{
int x;
float r;
printf("enter the radius ");
scanf("%f",&r);
printf("select what you want to calculate \n");
printf("1.circumference\n");
printf("2.area\n");
printf("3.volume of sphere\n");
scanf("%d",&x);


switch(x)
{
case 1:printf("%.2f",2*3.14*r);break;
case 2:printf("%.2f",3.14*r*r);break;
case 3:printf("%.2f",3.14*4/3*r*r*r);break;
default:printf("it is not a valid option");
}
}

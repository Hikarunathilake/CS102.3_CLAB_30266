#include <stdio.h>
int main()
{
int num,power,total=1;
power=num=0;
printf("enter number ");
scanf("%d",&num);
printf("enter power ");
scanf("%d",&power);

for (power;power>=1;--power){
total*=num;}
printf("answer is %d ",total);
}


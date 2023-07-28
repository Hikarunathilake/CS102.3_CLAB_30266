#include <stdio.h>
 int main()
 {
 float nw,basic;
 char name[20];
 printf("enter employee name ");
 scanf("%s",name);
 printf("enter basic salary ");
 scanf("%f",&basic);
 if (basic<5000)
 nw=basic+(basic*0.05);
 else if (basic>=5000&basic<10000)
 nw=basic+(basic*0.1);
    else if (basic>10000)
    nw=basic+(basic*0.15);
    printf("new salary is %.2f",nw);
 }

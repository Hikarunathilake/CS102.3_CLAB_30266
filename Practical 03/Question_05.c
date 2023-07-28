#include <stdio.h>
int main ()
{
int n1,n2;
printf("enter first number ");
scanf("%d",&n1);
printf("enter second number ");
scanf("%d",&n2);
if (n1%n2==0)
{
printf("first number is a multiple of the second number");
}
else{
printf ("first number is not a multiple of the second number");
}
}

#include <stdio.h>
int main()
{
char char1;
printf("enter character or number ");
scanf(" %c",&char1);
switch (char1)
 {
 case 'A':printf("65");break;
 case 'B':printf("66");break;
 case 'C': printf("67");break;
 case 'a':printf("97");break;
 case 'b':printf("98");break;
 case 'c': printf("99");break;
 case '$':printf("36");break;
 case '*':printf("42");break;
 case '+': printf("43");break;
 case '/':printf("47");break;
 case '0':printf("48");break;
 case '1':printf("49");break;
 case '2':printf("50");break;
 default:printf("Invalid character");
 }
 }


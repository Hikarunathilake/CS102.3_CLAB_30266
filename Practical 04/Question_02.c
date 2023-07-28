#include <stdio.h>
int main()
{
float x,y;
char symbol;
printf("enter the first number ");
scanf("%f",&x);
printf("select calculation operator \n" );
printf("+,*,/,- ");
scanf("%s",&symbol);
printf("enter the second number \n");
scanf("%f",&y);
switch(symbol)
 {
 case'+':printf("%.2f ",x+y);break;
 case'*':printf("%.2f ",x*y);break;
 case'/':printf("%.2f ",x/y);break;
 case'-':printf("%.2f ",x-y);break;
 }
}

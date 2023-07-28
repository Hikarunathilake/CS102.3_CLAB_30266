#include <stdio.h>
int main ()
{
int digit,n1;
printf("enter number ");
scanf("%d",&n1);
while (n1!=0){
digit=n1%10;
printf("%d",digit);
n1/=10;
}


}

#include<stdio.h>
int main()
{
int n1,digit;
int sum=0;
printf("enter number ",n1);
scanf("%d",&n1);
while (n1!=0){
    digit=n1%10;
    printf("%d \n",digit);
    sum+=digit;
    n1/=10;
}
printf("sum of the digits is %d",sum);



}

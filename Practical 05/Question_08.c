#include<stdio.h>
 int main()
{
int n1,n2,sum=0,temp;
printf("enter the number=");
scanf("%d",&n1);
temp=n1;
while(n1>0)
{
n2=n1%10;
sum=sum+(n2*n2*n2);
n1=n1/10;
}
if(temp==sum)
printf("armstrong  number ");
else
printf("not armstrong number");

}



#include<stdio.h>
int main()
{
    int x,sum=0;
    while(1)
    {
        printf("enter a number=");
        scanf(" %d",&x);
        if(x==-1)
        break;
        sum=sum+x;
    }
printf("sum is = %d",sum);
}

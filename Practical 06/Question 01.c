#include <stdio.h>
int main()
{
int arr[10],sum=0,avg,max=0,i,r_array[10];

for(i=0;i<10;i++)
{
printf("enter element no %d  ",i+1);
scanf("%d",&arr[i]);
sum+=arr[i];
avg=sum/10;
  if(arr[i]>max)
  {
    max=arr[i];
   }
}

  for (int i = 0; i < 10; i++) {
    r_array[i] = arr[9 - i];}

printf("average value  is %d \n",avg);
printf("total  is %d \n",sum);
printf("highest value is %d \n",max);
printf("the reverse order of the elements is  \n");
for (int i = 0; i < 10; i++)
{
    printf("%d \n",r_array[i]);
}

}

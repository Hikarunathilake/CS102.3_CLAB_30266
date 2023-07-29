#include <stdio.h>
int main ()
{
int arr1[3][3],arr2[3][3],sum[3][3],r,c;
printf("enter the first array \n");
for (r=0;r<3;r++)
{
for (c=0;c<3;c++)
{
printf("enter array1[%d][%d] ",r,c);
scanf("%d",&arr1[r][c]);
}

}
printf("enter the second array \n");
for(r=0;r<3;r++)
{
    for(c=0;c<3;c++)
    {
        printf("enter array2[%d][%d] ",r,c);
        scanf("%d",&arr2[r][c]);

    }

}
for(r=0;r<3;r++)
{
  for(c=0;c<3;c++)
  {
      sum[r][c]=arr1[r][c]+arr2[r][c];
  }

  }
  printf("the sum of the two arrays are \n");
  for(r=0;r<3;r++)
  {
      for(c=0;c<3;c++)
      {
          printf("sum[%d][%d]=%d \n",r,c,sum[r][c]);
      }
  }



}

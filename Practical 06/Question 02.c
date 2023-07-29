#include <stdio.h>
int main()
{int x;

    printf("enter the size of the array ");
    scanf("%d",&x);
    int arr1[x],arr2[x],i,scalar_sum1=0,scalar_sum2=0,vector_sum[x];
    printf("enter values for array 1 \n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr1[i]);
        scalar_sum1+=arr1[i];
    }
    printf("enter values for array 2 \n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr2[i]);
        scalar_sum2+=arr2[i];
        vector_sum[i]=arr1[i]+arr2[i];
    }


    printf("the scalar sum of array 1 is %d \n",scalar_sum1);
   printf("the scalar sum of array 2 is %d \n",scalar_sum2);
    printf("the vector sum is \n ");
    for(i=0;i<x;i++)
    {
        printf("%d \n",vector_sum[i]);
    }
}

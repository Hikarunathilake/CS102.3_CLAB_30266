#include <stdio.h>

int main() {
    int array[10];
int negativec=0,positivec=0,zeroc=0,i;
    printf("Enter 10 numbers :\n");


    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nArray elements:\n");


    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);


    printf("\n");

   if(array[i]>0){
   positivec++;}
   else if(array[i]==0){
    zeroc++;}
    else{
    negativec++;
    }
    }
printf("positive number count is %d \n",positivec);
printf("negative number count is %d \n",negativec);
printf("zero count is %d \n",zeroc);}



#include <stdio.h>

int main() {
    int array[10];
int itemc=0,i,total;
float avg;
    printf("Enter 10 item prices:\n");


    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
        total+=array[i];
    }

    printf("\nArray elements:\n");


    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);


    printf("\n");

   if(array[i]>200){
   itemc++;}
   avg=total/10;
    }
printf("number of items higher than Rs200/= is %d \n",itemc);
printf("the average item price is %.2f \n",avg); }






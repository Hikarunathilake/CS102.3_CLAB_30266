#include <stdio.h>

int main() {
    int array[10];
int evenc=0,i;
    printf("Enter 10 integers:\n");


    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nArray elements:\n");


    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);


    printf("\n");

   if(array[i]%2==0){
   evenc++;}
    }
printf("even number count is %d",evenc); }

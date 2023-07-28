     #include<stdio.h>
int main(){

int marks[10],sum=0;
int i,max,min;
float avg;
printf("enter marks of 10 students ");
for(i=0;i<10;i++){
    scanf("%d",&marks[i]);
    sum+=marks[i];
    if(i==0){
        max=min=marks[i];
    }else if(marks[i]>max){
    max=marks[i];}
    else if(marks[i]<min){
        min=marks[i];}
    }
    avg=sum/10;
    printf("highest mark is %d \n ",max);
    printf("lowest mark is %d \n ",min);
    printf("average is %.2f \n ",avg);
}

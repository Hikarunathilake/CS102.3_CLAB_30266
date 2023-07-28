
#include <stdio.h>
int main()
{
  int empc=0,empno,emph,over,overp,overc=0;
  float perc;
  printf("enter employee number (or enter -999 to end) ");
    scanf("%d",&empno);


  while(empno!=-999){

    printf("enter hours of work ");
    scanf("%d",&emph);
    over=emph-40;

    if(over<=0){
     overp=emph*150;}
    else{
        overp=(40*150)+(over*200);
        if (overp>4000);{
        overc++;}}
        empc++;


    printf("employee number %d \n",empno);
    printf("overtime payment %d \n",overp);
    printf("enter employee number (or enter -999 to end) ");
    scanf("%d",&empno);}
     perc=(float)overc/empc*100;
    printf("percentage of employees with payment higher than Rs4000 : %.2f  ",perc);




}

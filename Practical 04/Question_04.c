include <stdio.h>
int main()
{
 char x;
 printf("Enter character ");
 scanf(" %c" ,&x);
    switch(x)
     {
       case 'a':printf("a is a vowel");break;
       case 'e':printf("e is a vowel");break;
       case 'i':printf("i is a vowel");break;
       case 'o':printf("o is a vowel");break;
       case 'u':printf("u is a vowel");break;
       default:printf("it is not a vowel");
     }
}

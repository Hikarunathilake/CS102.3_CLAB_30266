#include <stdio.h>
int main()
 {
    int x;
    float y;
    double z;
    char c;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Enter a float: ");
    scanf("%f", &y);
    printf("Enter a double: ");
    scanf("%lf", &z);
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Integer: %d\n", x);
    printf("Float: %f\n", y);
    printf("Double: %lf\n", z);
    printf("Character: %c\n", c);

}



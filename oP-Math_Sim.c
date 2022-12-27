#include<stdio.h>

void main ()

{

    int a, b,c;

    printf("\nProporcioname el primer numero\n");
    scanf("%d", &a);
    printf("\nProporcioname el segundo numero\n");
    scanf("%d", &b);

    c = a + b;
    printf("\t%d", c);

    c = a - b;
    printf("\t%d", c);

    c = a * b;
    printf("\t%d", c);

    c = a / b;
    printf("\t%d", c);

    c = a % b;
    printf("\t%d\t", c);
}
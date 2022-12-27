#include<stdio.h>

void main ()

{
    int acum, num;
    printf("\nDame la tabla que quieres que se imprim,y presiona ENTER\n");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
     {
        acum = num * i;
        printf("\n%d X %d = %d\n", num, i, acum);
     }
}
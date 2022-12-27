#include<stdio.h>

void main ()

{

    int acum = 1;
    int num, potencia;

    printf("\nDame el numero y presiona ENTER\n");
    scanf("%d", &num);
    printf("\nDame la potencia y presiona ENTER\n");
    scanf("%d", &potencia);
    for (int i = 0; i < potencia; i++)
      {
        acum = acum * num;
      }    

      printf("\n %d\n", acum);
}
#include <stdio.h>

#define MAXSIZE 7

void main ()
{
    
    int vector[MAXSIZE] = {10, 15, 5, 3, 8, 2, 12};
    int vector1[MAXSIZE] = {100, 25, 64, 4, 75, 52, 14};
    int num, acum, num1, acum1, j;
    num = vector[0];
    num1 = vector[0];
    acum = vector1[0];
    acum1 = vector1[0];
 printf("\n");
    printf("\tVector #1 es:\n");
    for (int i = 0; i < MAXSIZE; i++)
    {
        /* code */
        printf("    %d  ", vector[i]);
    }
    printf("\n");
     printf("\tVector #2 es:\n");
    for (int i = 0; i < MAXSIZE; i++)
    {
        /* code */
        printf("    %d  ", vector1[i]);
    }
    printf("\n");
   for (int i = 0; i < MAXSIZE; i++)
   {
    /* code */
    if (num > vector[i])
    {
        /* code */
        num = vector[i];
    }
    if (num1 < vector[i])
    {
        /* code */
        num1 = vector[i];
    }
    }
   for (int i = 0; i < MAXSIZE; i++)
   {
    /* code */
    if (acum > vector1[i])
    {
        /* code */
        acum = vector1[i];
    }
    if (acum1 < vector1[i])
    {
        /* code */
        acum1 = vector1[i];
    }
    }
    printf("\nEl numero menor del vector #1 es %d\n", num);
    printf("\nEl numero mayor del vector #1 es %d\n", num1);
   printf("\nEl numero menor del vector #2 es %d\n", acum);
    printf("\nEl numero mayor del vector #2 es %d\n", acum1);
   
}

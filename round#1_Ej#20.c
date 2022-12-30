#include <stdio.h>

#define MAXSIZE 7

void main ()
{
    
    int vector[MAXSIZE] = {10, 15, 5, 3, 8, 2, 12};
    int vector1[MAXSIZE] = {100, 25, 64, 4, 75, 52, 14};
    int num, acum;
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
    
    for (int i = 0; i < MAXSIZE; i++)
    {
        /* code */
        if ( (vector1[i] < vector1[i + 1]) && i <= MAXSIZE )
        {
            /* code */
            num = vector1[i];
        }
        
    }
    for (int i = 0; i < MAXSIZE; i++)
    {
        /* code */
        if ( (vector[i] < vector[i + 1]) && i <= MAXSIZE )
        {
            /* code */
            acum = vector[i];
        }
        
    }
    printf("\nEl numero menor del vector #1 es %d\n", acum);
    printf("\nEl numero menor del vector #2 es %d\n", num);
}
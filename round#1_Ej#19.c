#include <stdio.h>

#define MAXSIZE 20

void main()

{
    char vector[MAXSIZE], vector1[MAXSIZE];
    int acum = MAXSIZE;
    printf("\nDame el nombre\t\t");
    scanf("%s", &vector);
    printf("\n");
    for (int i = MAXSIZE; i >= 0; i--)
    {
        /* code */
        // printf(" %c", vector[i]);
        vector1[MAXSIZE - acum] = vector[i];
         acum--;
    }
    printf("\n");
    //Si no se hace de esta forma, comienza imprimiendo basura, por eso la necesidad de otro vector
    for (int i = 0; i <= MAXSIZE; i++)
    {
        /* code */
        printf("%c", vector1[i]);
    }
    printf("\n");
    printf("\n");
}
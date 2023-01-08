#include<stdio.h>

#define MAXSIZE 20 // EMILIO MORENO
int main ()

{
    char vector[MAXSIZE];
    char a;
    printf("\nDame la fraseo palabra\t");
    // scanf solo permite captura de una sola palabra, en cambio gets captura toda la frase incluido con espeacios
    gets (vector); 
    // scanf("%s", &vector);
    printf("\n La palabra es: %s\t", vector);
    printf("\n");
    for (int i = 0; i < MAXSIZE; i++)
    {
        /* code */
        // printf("%c", vector[i]);
        if (vector[i] >= 97 && vector[i] != 32) 
        {
             /* code */
             vector[i] = vector[i] - 32;
        }
    }
    printf("%s", vector);
    printf("\n");
    for (int i = 0; i < MAXSIZE; i++)
    {
        /* code */
        if (vector[i] >= 65 && vector[i] != 32)
        {
             /* code */
             vector[i] = vector[i] + 32; // Otra forma de hacer las cosas con el mismo resultado
        }
        printf("%c", vector[i]);
    }
    printf("\n\n");
}
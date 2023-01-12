#include<stdio.h>

#define MAXSIZE 26 // EMILIO MORENO
#define RANGOD 65

int main ()

{
    char vector[MAXSIZE], vector1[MAXSIZE];
    int abc[MAXSIZE];
    int acum = 90;
    int acum1;
    //Carga el abecedario al reves
    for (int i = 0; i < MAXSIZE; i++) 
    {
        /* code */
        abc[i] = acum;
        acum--;
    }
    printf("abc %c", abc[0]); //Prueba de abecedario al reves
    printf("\nDame la frase o palabra\t");
    // scanf solo permite captura de una sola palabra, en cambio gets captura toda la frase incluido con espeaciosUNO DOS
    gets (vector); 
     for (int i = 0; i < MAXSIZE; i++)
      {
    /* code */
    acum1 = vector[i] - RANGOD;
    printf("%c", abc[acum1]); 
      }
    // acum1 = vector[0] - RANGOD;
    // printf("prueba %d ", acum1); 
    // scanf("%s", &vector);
    printf("\n La palabra es: %s\t", vector);
    printf("\n");
    
    printf("\n\n");
}
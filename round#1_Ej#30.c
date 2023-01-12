/******************************************************************************

                          Note
This program only handles the range of uppercase letters, 
since it is the requirement that is requested in the example. 
But with a slight modification the range can be extended to lowercase letters.
Nota
Este programa solo maneja el rango de las letras mayusculas,ya que es el 
requerimiento que se pide en elejemplo. Pero con una ligera modificacion se 
puede ampliar el rango a las letras minusculas. 

*******************************************************************************/
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
    // Con esto ubico la posicion del registro de la letra que deseo intercambiar
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

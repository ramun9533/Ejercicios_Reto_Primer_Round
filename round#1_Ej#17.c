#include<stdio.h>

#define MAXSIZE 20

void main ()

{

    char vector[MAXSIZE], ch;
    int acum = 0;
    int acum1 = 0;
    int i = 0;
    printf("\nDame la palabra\n");
    gets(vector); //gets funciona muy bien para cadenas de caracteres
//65 || 69 || 73 || 79 || 85 || 97 || 101 || 105 || 111 || 117)
//('A' || 'a' || 'E' || 'e' || 'I' || 'i' || 'O' || 'o' || 'U' || 'u'))
//|| a || E || e || I || i || O || o || U || u
for (int i = 0; vector[i] != '\0'; i++)
{
    /* code */
    ch = vector[i];

    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
    {
        /* code */
        acum++;
    }
    else if (ch == ' ')
         continue;
// Instrucción continue en Lenguaje C
// ¿Para qué sirve la instrucción continue en C?
// En lenguaje C, para escribir una instrucción de salto continue (continuar), se utiliza la sintaxis:
// continue;
// La instrucción de salto continue siempre se usa para interrumpir (romper) la ejecución normal de un 
// bucle. Sin embargo, el control del programa no se transfiere a la primera instrucción después del bucle 
// (como sí hace la instrucción break, véase el apartado anterior Instrucción break en C), es decir, el 
// bucle no finaliza, sino que, finaliza la iteración en curso, transfiriéndose el control del programa a 
// la condición de salida del bucle, para decidir si se debe realizar una nueva iteración o no.
    else 
        acum1++;
}
printf("\nVocales %d\n", acum);
printf("\nConsonantes %d\n", acum1);

}
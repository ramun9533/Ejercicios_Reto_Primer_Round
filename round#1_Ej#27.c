#include<stdio.h>
void main ()
{
    float  dato, prom, acum = 0;
    int  seleccion, cont = 0;
    do
    {
        /* code */
        printf("\nPropocioname el dato\n");
        scanf("%f", &dato);
        acum = acum + dato; 
        cont++;
        printf("\nSi desea seguir introducioendo numeros presione 1\n");
        scanf("%d", &seleccion);
    }while ( seleccion == 1); 
     
    printf("\n%f\n", (acum / cont));
}
#include <stdio.h>
void main ()
{
    int inicio, final, imprime;
    
    printf("\nDame el numero de Inicio\n");
    scanf("%d", &inicio);
    printf("\nDame el numero del Final\n");
    scanf("%d", &final);
    for (int i = inicio; i <= final; i++)
    {
        /* code */
        printf("\t%d\t",i);
    }
}
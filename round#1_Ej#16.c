#include <stdio.h>
void main ()
{
    int inicio, final, imprime, incremento, acum = 0;
    
    printf("\nDame el numero de Inicio\n");
    scanf("%d", &inicio);
    printf("\nDame el numero del Final\n");
    scanf("%d", &final);
    printf("\nDame el numero de Incremento\n");
    scanf("%d", &incremento);
    for (int i = inicio; i <= final; i++)
    {
        /* code */
        acum = incremento + acum;
        if (acum <= final)
         {

            printf("\t%d\t", acum);

         }
         
    }
}
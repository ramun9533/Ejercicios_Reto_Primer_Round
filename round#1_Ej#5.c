#include<stdio.h>
void main ()
{

    int numero, modulo;
    printf("\nDame el numero\t");
    scanf("%d", &numero);
    modulo = numero % 2;
    if (modulo == 0 )
    {
        printf("\ntrue\n");
    }
    else printf("\nfalse\n");
}

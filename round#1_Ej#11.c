#include<stdio.h>

void main ()

{

    int i, rSup, rInf;
    int vector[20];
    float acum;

    printf("\nDame el rango Superior\n") ;
    scanf("%d",&rSup);
    printf("\nDame el rango Inferior\n") ;
    scanf("%d",&rInf);
    acum = rInf - rSup;
    acum = acum * vector[i];
    for (i = rInf; i < rSup; i++)
    {
        /* code */
        if (acum > rSup)
        {
            /* code */
            acum = acum / i;
        }
        if (acum < 0)
        {
            /* code */
            acum = acum * (-1);
        }
        
        
    }
// printf("%f", acum);    
if (acum <= rSup)
        {
            /* code */
            printf("%f\n", acum);
        }

}
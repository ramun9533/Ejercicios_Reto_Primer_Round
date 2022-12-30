#include<stdio.h>
void main ()

{
    int x = 0, y = 1, z = 1, limite;

    printf("\n Dame el limite de la serie  \n");
    scanf("%d", &limite);

    for (int i = 0; i < limite; i++)
    {
        /* code */
        if ( (z < limite) && (z > 0))
        {
            /* code */
             printf("\t%d\t", z);
        }
        z = x + y;
        x = y;
        y = z;
        
        
    }
    

    
}
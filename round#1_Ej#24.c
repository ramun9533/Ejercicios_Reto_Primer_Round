#include <stdio.h>

void main ()

{

    int num, res;
    printf("\nDame el numero\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        /* code */
        res = num % i;
        if (res == 0)
        {
            /* code */
            // if (i > 10)
            
            // {
            //     /* code */
            //     printf("\n");
            // }
            
            printf("\t %d\t", i);
        }
    }
}
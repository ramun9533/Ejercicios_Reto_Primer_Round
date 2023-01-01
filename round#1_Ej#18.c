#include<stdio.h>

#define MAXSIZE 20
void main ()
{
char vector[MAXSIZE];

printf("\nDame la palabra\n");
scanf("%s", vector);
printf("\n\t%s\n", vector);
printf("\n");
for (int i = 0; i < MAXSIZE - 10; i++)
{
    /* code */
    if (vector[i] != 0 && vector[i] > 0 )
    {
        /* code */
         printf(" %d ", vector[i]);
    }
    
   
}

}
#include<stdio.h>

#define MAXSIZE 20
void main()

{
char vector[MAXSIZE];
int d = 0;
int i = 0;
    printf("\nDime tu nombre\t");
    scanf("%s", &vector);
    


        while (vector[i] != '\0')
         {
            i++;
            
           /* code */
             d++;
         }


    
    printf("Hola %s, tu nombre tiene %d letras\n", vector, d);
    
    
    // %s, tu nombre tiene %d letras", vector[MAXSIZE], d); 
}
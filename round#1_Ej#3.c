#include <stdio.h>

#define MAXSIZE 20
void main()
{

     char vector[MAXSIZE], vector1[MAXSIZE];
     int i, acum, acum1;
//  printf("·\n%c\n", acum1);
for (int i = 0; i < MAXSIZE; i++)
    {
        /* code */
        vector[i] = '\0';
        vector1[i] = '\0';
    }
    printf("\nDame la primera palabra\n\t");
    scanf("%s", &vector[MAXSIZE]);
    printf("\nDame la segunda palabra\n\t");
    scanf("%s", &vector1[MAXSIZE]);
  while (vector1[i] == vector[i] && vector[i] == '\0' && vector1[i] == '\0' ) //Ya funcion, pero se cambio el != por un ==
  {
    /* code */
    i++;
  }

acum1 = vector1[i] == vector[i] ?   61 : 60; //ternario,para ahorrar lineas de codigo

  printf("·\n%c\n", acum1);
//    if (vector1[i] == vector[i])
//     {
//         /* code */
//         acum1 = 61;
//     }
//     else acum1 = 60;
        

// Esto si funciona
//     char vector[] = "hola como estas";
//     char vector1[] = "hoasdfla como estas";
//    int i, acum;
//    i = 0;
//   while (vector1[i] == vector[i] && vector[i] != NULL && vector1[i] != NULL )
//   {
//     /* code */
//     i++;
   
    
//   }
//    if (vector1[i] == vector[i])
//     {
//         /* code */
//         acum = 1;
//     }else acum = 0;

//     printf("·\n%d\n",acum);
  
   
   
   
    // int acum, acum1;
    // for (int i = 0; i < MAXSIZE; i++)
    // {
    //     /* code */
    //     vector[i] = 3;
    //     vector1[i] = 3;
    // }
    // printf("\nDame la primera palabra\n\t");
    // scanf("%s", &vector[MAXSIZE]);
    // printf("\nDame la segunda palabra\n\t");
    // scanf("%s", &vector1[MAXSIZE]);
    // acum = 0;
    // for (int i = 0; i < MAXSIZE; i++)
    // {
    //     /* code */

    //     if (vector[i] == vector1[i])
    //     {
    //         /* code */
    //         acum++;
    //     }
    // }
    // printf("\n\t%d", acum);
    // if (acum != MAXSIZE)
    // {
    //     /* code */
    //     printf("\n\tfalse\n");
    // }
    // if (acum == MAXSIZE)
    // {
    //     /* code */
    //     printf("\n\ttrue\n");
    // }
    // printf("\n\t%s\n", vector);
}
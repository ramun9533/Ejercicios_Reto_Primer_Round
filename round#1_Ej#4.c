#include<stdio.h>

#define MEDAD 18
void main ()

{
    int edad;
printf("\nDime tu edad\n");
scanf("%d", &edad);


 if (edad >= MEDAD)
  {
    printf("\n true \n");
  }
 
  if (edad < MEDAD ) printf("\n false\n"); 
}
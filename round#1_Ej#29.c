#include<stdio.h>

#define MAXSIZE 10
#define VECTSIZE 4

void main ()

{
    int num, acum;
    float res;
    int vector[VECTSIZE] = {2, 3, 5 , 7};
    acum = 0;

    printf("\n\tDame el numero\n");
    scanf("%d", &num);
    
            for (int i = 0; i < VECTSIZE; i++)
     {
      /* code */
       res = num % vector[i];
       if (res != 0)
       {
        /* code */
        acum++;
        
       }
       
     }
     //|| 3 || 5 || 7
if (num < MAXSIZE && num > MAXSIZE - 9)
 {   
    switch (num)
    {
    case 2/* constant-expression */:
        /* code */
        printf("\nEl numero  es primo\n");
        break;
    case 3/* constant-expression */:
        /* code */
        printf("\nEl numero  es primo\n");
        break;
    case 5/* constant-expression */:
        /* code */
        printf("\nEl numero  es primo\n");
        break;
    case 7/* constant-expression */:
        /* code */
        printf("\nEl numero  es primo\n");
        break;
    default:
    printf("\nElnumero NO es primoE\n");
        break;

    }
 }  
  if (num >= MAXSIZE)
  {
    /* code */
    if (acum == VECTSIZE)
    {
        /* code */
        printf("\nEl numero  es primo\n");
    }else if (acum != VECTSIZE && num >= MAXSIZE)
          {
            /* code */
            printf("\nElnumero NO es primoE\n");
          }
  }
  
  printf("\nEE %d\n", acum);
}
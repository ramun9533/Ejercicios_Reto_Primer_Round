#include <stdio.h>


void main()

{
    float a, b;
     double  i, precision = 0.0000001;
    double   acum;

    printf("\nDame el cateto Opuesto\t");
    scanf("%f", &a);
    printf("\nDame el cateto Adyasente\t");
    scanf("%f", &b);

    acum = (a * a) + (b * b);
    for ( i = 1; i * i <= acum; i++);
    for (--i; i * i < acum; i += precision);
    
        printf("\n La Hipotenusa alcuadrado es = %lf\n", acum);
        printf("\n La Hipotenusa del Triangulo rectangulo es = %lf\n\n", i);
}

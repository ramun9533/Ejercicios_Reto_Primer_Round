#include<stdio.h>

#define PI 3.1416
void main ()

{

    float a, p, r;

    printf("\nDame el radio del circulo\n");
    scanf("%f", &r);

    p = 2 * PI * r;
    a = PI * (r * r);
    printf("\nEl Perimetro es %f", p);
    printf("\nEl Area es %f \n", a);
}
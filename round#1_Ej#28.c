#include <stdio.h>


void main()

{
    float a, b, c;
     double  i, precision = 0.0000001;
    double   acum, acum1;

    printf("\nDame el cateto Opuesto\t");
    scanf("%f", &a);
    printf("\nDame el cateto Adyasente\t");
    scanf("%f", &b);

    acum = (a * b) + (b * b);
    for ( i = 1; i * i <= acum; i++);
    for (--i; i * i < acum; i += precision);
    
        printf("\n La Hipotenusa alcuadrado es = %lf\n", acum);
        printf("\n La Hipotenusa del Triangulo rectangulo es = %lf\n\n", i);
}

// double squareRoot(double n) {
//    double i, precision = 0.00001;

//    for(i = 1; i*i <= n; ++i);           //Integer part

//    for(--i; i*i < n; i += precision);  //Fractional part

//    return i;
// }

// int main() {
//    int n = 64;

//    printf("Square root of %d = %lf", n, squareRoot(n));

//    return 0;
// }
//https://tutoriales.edu.lat/pub/learn-c-by-examples/square-root-program-in-c/programa-de-raiz-cuadrada-en-c

// Codigo y explicacion de chatgpt

// #include <stdio.h>

// double sqrt_newton(double number, double guess) {
//     // Constante de precisión
//     const double epsilon = 0.00001;

//     // Iteramos hasta que la diferencia entre la nueva y la vieja aproximación sea menor que epsilon
//     while (guess - number/guess > epsilon || number/guess - guess > epsilon) {
//         // Calculamos una nueva aproximación mejorada
//         guess = (guess + number/guess) / 2;
//     }

//     // Devolvemos la aproximación final
//     return guess;
// }

// int main(void) {
//     double number = 9.0;
//     double guess = 2.0;  // Aproximación inicial
//     double result = sqrt_newton(number, guess);
//     printf("La raíz cuadrada de %f es aproximadamente %f\n", number, result);
//     return 0;
// }
// En este ejemplo, la función sqrt_newton es igual que en el ejemplo anterior, excepto que en lugar de 
// utilizar la función fabs de la biblioteca math.h para calcular el valor absoluto de la diferencia entre 
// la nueva y la vieja aproximación, se utiliza una condición || (OR lógico) para comparar la diferencia con 
// epsilon de dos maneras diferentes. Esto permite calcular el valor absoluto de la diferencia sin tener que 
// incluir la biblioteca math.h.

// Espero que este ejemplo te ayude a entender cómo calcular la raíz cuadrada de un número utilizando el
//  método de Newton en C sin utilizar la biblioteca math.h. Si tienes alguna pregunta adicional o necesitas
//   más ayuda, no dudes
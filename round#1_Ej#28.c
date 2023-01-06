#include <stdio.h>

double raiz(double n) {
   double i, precision = 0.00001;

   for(i = 1; i * i <= n; ++i);           //Parte entera

   for(--i; i * i < n; i += precision);  //Parte fraccional

   return i;
}
int main() {
   int n = 2;

   printf("Square root of %d = %lf \n", n, raiz(n));

   return 0;
}

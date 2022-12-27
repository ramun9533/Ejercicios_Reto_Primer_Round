#include<stdio.h>

void main ()

{
int a, b , c;

printf("\nDame el primer numero\n");
scanf("%d", &a);
printf("\nDame el primer numero\n");
scanf("%d", &b);

c = a % b;

if (c > 0)
{
    printf("\nfalse\n");
}else printf("\ntrue\n");


}
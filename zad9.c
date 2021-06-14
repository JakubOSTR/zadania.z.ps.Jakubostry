#include <stdio.h>
void main(void)
{
float x;
float y;
puts("Podaj liczbe zmiennopozycyjna:");
scanf("%f",&x);
if(x >= 0.0)
{
y = x;
}
else
{
y = -x;
}
puts("Wartosc bezwzgledna z wprowadzonej liczby wynosi:");
printf("%f",y);
putchar('\n');
}

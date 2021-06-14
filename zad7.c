#include <stdio.h>
void main(void)
{
int i,a,licznik;
puts("Podaj ilosc elementow ciagu do wyswietlenia");
scanf("%d",&licznik);
a=2;
i=0;
while(i<licznik)
{
printf("%d",a); putchar('\n');
a = a + 2;
i = i + 1;
}
}

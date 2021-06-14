#include <stdio.h>
void main(void)
{
int tab[5];
int i;
int ile_parzystych;
puts("Wypelnij 5 elementowa tablice liczbami calowitymi:");
for(i=0;i<5;i=i+1)
{
putchar('t'); printf("%d",i); putchar('=');
scanf("%d",&tab[i]);
}
ile_parzystych=0;
for(i=0;i<5;i=i+1)
{
int tymcz;
tymcz=tab[i]%2;
if(tymcz == 0)
{
ile_parzystych = ile_parzystych + 1;
}
}
puts("We wprowadzonej tablicy bylo");
printf("%d",ile_parzystych);
puts(" liczb parzystych.");
}


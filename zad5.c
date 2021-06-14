#include <stdio.h>
#include <string.h>
struct wiersz_bazy
{
char imie[100];
int wiek;
};
void main(void)
{
struct wiersz_bazy Ania={"Ania",35};
struct wiersz_bazy Beata;
struct wiersz_bazy Nieznana;
int tmp;
strcpy(Beata.imie,"Beata");
Beata.wiek=32;
puts("Podaj imie:");
gets(Nieznana.imie);
puts("Podaj wiek:");
scanf("%d",&tmp);
Nieznana.wiek=tmp;
puts("Pola bazy:");
puts(Ania.imie);
printf("%d",Ania.wiek);
putchar('\n');
puts(Beata.imie);
printf("%d",Beata.wiek);
putchar('\n');
puts(Nieznana.imie);
printf("%d",Nieznana.wiek);
putchar('\n');
}

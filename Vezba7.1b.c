// Vezba7.1b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Struktura za rad sa takama
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// struktura tacka
struct tacka
{
	char naziv[10]; // polje naziv - 10B
	int x; // polje x - 4B
	int y; // polje y - 4B
};
// funkcija za unos podataka o tacki
void unosTacke(struct tacka *t)
{
	printf("Unesite naziv prve tacke: ");
	scanf("%s", &t->naziv); // (*t).naziv
	printf("Unesite x koordinatu tacke t1: ");
	scanf("%d", &t->x);
	printf("Unesite y koordinatu tacke t1: ");
	scanf("%d", &t->y);
}
void prikazTacke(struct tacka t)
{
	printf("Koordinate tacke %s su: (%d, %d)\n",t.naziv, t.x, t.y);
}
int kvadrant(struct tacka t)
{
	if (t.x > 0 && t.y > 0)
		return 1;
	else if (t.x < 0 && t.y > 0)
		return 2;
	else if (t.x < 0 && t.y < 0)
		return 3;
	else if (t.x > 0 && t.y < 0)
		return 4;
	else
		return 0;
}
int main()
{
	int x1, y1, naziv;
	struct tacka t1, t2, *pt=&t1; // deklaracija promenljive t1 tipa tacka
	unosTacke(&t1); // poziv funkcije unosTacke
	prikazTacke(t1); 
	t2 = t1;
	strcpy(t2.naziv, "T2");
	prikazTacke(t2);
	if(kvadrant(t1) == 0)
		printf("Tacka se nalazi na nekoj od osa\n");
	else
		printf("Kvadrant prve tacke je: %d\n", kvadrant(t1));
}

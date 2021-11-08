#include <stdio.h>

/*Programmbeispiel zur Verwendung von Funktionen mit Prototypen.
Durch die Prototypen zu Beginn werden die Funktionen deklariert
und die Funktionsdefinition ist daher nach dem Aufruf in main() möglich,
wo die Funktionen verwendet werden */

void druckeMeineZahl(int);
int gibEineZahlEin();

int main()
{
    int zahl;
    zahl = zahlEinlesen();
    druckeMeineZahl(zahl);
    return;

}

void druckeMeineZahl(int zahl)
{
    printf("Die Zahl ist %i ", zahl);
}

int zahlEinlesen()
{
    int zahl;
    printf("Bitte geben Sie eine Zahl ein! \n");
    scanf("%i",&zahl);
    return zahl;
}

#include <stdio.h>


/* Programm zur Demonstration der Verwendung von printf mit Formatbezeichnern und Angabe der Genauigkeit */

int main()
{
    double betrag1= 0.5634323;
    double betrag2= 0.2432341;
    printf("Summe: %.3f\n", betrag1+betrag2);

    getchar();
    return 0;
}

#include <stdio.h>


/* Programm zur Demonstration der Verwendung von printf mit Formatbezeichnern und tags */

int main()
{
    printf("Zahlen rechtsbündig ausgeben: %5d, %5d, %5d\n", 34, 343, 3343);
    printf("Zahlen rechtsbündig ausgeben, links mit 0 gefüllt: %05d, %05d, %50d\n", 34, 343, 3343);
    printf("Zahlen linkssbündig ausgeben: %-5d, %-5d, %-5d\n", 34, 343, 3343);

    getchar();
    return 0;

}

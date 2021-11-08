/* Programm zur Demonstration der Verwendung von printf mit Formatbezeichnern und tags */

#include <stdio.h>

int main()
{
    printf("Zahl 67: %+i\n", 67);
    printf("Zahl 67: % i\n", 67);
    printf("Zahl 67: %#x\n", 67);
    printf("Zahl 0: %#x\n", 0);
    getchar();
    return 0;
}

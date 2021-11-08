/* Programm zur Demonstration der Verwendung des Rückgabewerts von scanf() */
#include <stdio.h>

int main()
{
    int a, b, check;

    printf("Bitte zwei Zahlen eingeben: ");
    check = scanf("%d %d",&a ,&b);
    fflush(stdin);

    /* Ist check gleich 2, war die Eingabe richtig. */
    if(check == 2)
    {
        printf("Beide Zahlen richtig %d und %d\n",a ,b);
    }
    else
    {
        printf("falsch!\n" );
    }
    return 0;
}

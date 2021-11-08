#include <stdio.h>

/*
Programm Wertebereich_simple.c
das Programm liest eine unsigned integer Zahl ein und gibt sie
auf der Console aus. Es demonstriert, was passiert, wenn eine Zahl außerhalb
des gültigen Bereichs eingelesen wird.*/

int main()
{
    /* i ist die einzulesende Zahl*/
    unsigned int i;

    /* maxnumber ist die größte Zahl, die als unsigned int darstellbar ist.*/
    unsigned int maxNumber;

    /*der Wert ist systemabhängig. In diesem Fall entspricht er dem Wert unten*/
    maxNumber=4294967295;

    printf("d.h. groesste abbildbare Zahl ist %u \n" , maxNumber);

    /*Es soll eine Zahl eingegeben werden. Probieren Sie auch mal eine Zahl außerhalb des Bereichs aus*/
    printf("geben Sie bitte eine Integer Zahl zwischen 0 und %u ein. \n", maxNumber);
    scanf("%u", &i);

    /* Ausgabe der eingegebenen Zahl*/
    printf("Die eingegebene Zahl ist %u \n", i);
    getchar();
    return 0;
}

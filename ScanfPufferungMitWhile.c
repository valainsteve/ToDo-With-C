/* Lösung des Problems mit dem Tastaturpuffer */
#include <stdio.h>

int main()
{
    char a, b, c;
    printf("1. Buchstabe : ");

    do
    {
        scanf("%c",&a);
    }
    while ( getchar() != '\n' );

    printf("2. Buchstabe : ");
    do
    {
        scanf("%c",&b);
    }
    while ( getchar() != '\n' );

    printf("3. Buchstabe : ");
    do
    {
        scanf("%c",&c);
    }
    while ( getchar() != '\n' );

    printf("%c %c %c\n", a, b, c);
    getchar();
    return 0;
}

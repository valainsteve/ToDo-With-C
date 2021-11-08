/* Programm zur Demonstration der Probleme, die mit dem Tastaturpuffer auftreten können */

#include <stdio.h>

int main() {
   char a,b,c;

   printf("1. Buchstabe : ");
   scanf("%c",&a);

   printf("2. Buchstabe : ");
   scanf("%c",&b);

   printf("3. Buchstabe : ");
   scanf("%c",&c);

   printf("Sie gaben ein : %c %c %c ",a,b,c);

   return 0;
}

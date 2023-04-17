#include <stdio.h>

int main(void){
    printf("Aufgabe 2: \n");
    printf("Hallo Welt! \n");
    printf("Aufgabe 3: \n");
    int x = 5;
    int y = 7;
    int summe = x + y;
    int produkt = x * y;
    int differenz = x - y;
    printf("summe = %d\n", summe);
    printf("differenz = %d\n", differenz);
    printf("produkt = %d\n", produkt);
    printf("quotient = \n");
    printf("%f \n", (float)x/y);
    printf("Aufgabe 4:");
    int m = 128;
    int modulo = m % 10;
    printf("Sei m %d. \n", m);
    printf("Die letzte Nachkommastelle von m ist %d \n" , modulo);
    printf("Aufgabe 5: \n");
    int z = 63;
    printf("%d \n", z);
    printf("%x \n", z);
    printf("%c \n", z);
    z++ ;
    printf("%d \n", z);
    printf("%x \n", z);
    printf("%c \n", z); 
}


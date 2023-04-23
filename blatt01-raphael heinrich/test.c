#include <stdio.h>
/*Aufgabe 1 wurde durchgeführt. Entsprechende Relikte sind nicht in diesem Ordner zu finden.
Auf Nachfrage können die Aufgaben jedoch nochmals vorgeführt werden.*/
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
    printf("quotient = ");
    printf("%f \n", (float)x/y);
    printf("Aufgabe 4: \n");
    int m = 128;
    int modulo = m % 10;
    printf("Sei m=%d. \n", m);
    printf("Die letzte Nachkommastelle von m ist %d \n" , modulo);
    printf("Aufgabe 5: \n");
    int z = 63;
    printf("Die Zahl 63 wird zunächst in Integer, dann hexadezimal, dann in Unicode dargestellt: \n");
    printf("%d \n", z);
    printf("%x \n", z);
    printf("%c \n", z);
    z++ ;
    printf("Nun führen wir das gleiche für die Zahl 64 durch: \n");
    printf("%d \n", z);
    printf("%x \n", z);
    printf("%c \n", z); 
}


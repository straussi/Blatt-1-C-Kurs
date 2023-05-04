#include <math.h>
#include <stdio.h>

int main() {
int b = 0;
printf("Gib eine Jahreszahl ein: \n");
scanf("%d", &b);
    if(b%4==0 && b%100 == 0 && b%400 ==0) {
        printf("Dein Jahr ist ein Schaltjahr! \n");
    } else if (b%4==0 && b%100 >= 1) {
        printf("Dein Jahr ist ein Schaltjahr! \n");
    } else if (b%4 >= 1 && b%100 ==0) {
        printf("Dein Jahr ist kein Schaltjahr! \n");
    } else {
        printf("Dein Jahr ist kein Schaltjahr! \n");
    }
}
#include <stdio.h>
#include <math.h>

int st=0;
int zi=0;
int wert=st;
float ps=0;
int yrs=0;
int main() {
printf("Gib ein Startkapital ein. \n");
scanf("%d", &st);
printf("Gib ein Zielkapital ein. \n");
scanf("%d", &zi);
printf("Gib einen jährlichen Prozentsatz (zB. '2.5') ein.\n");
scanf("%f", &ps);
while (wert<=zi) {
    wert += (1+(ps/100)) * wert;
    ++yrs;
}
printf("Du musst %d Jahre sparen! \n", yrs);

}
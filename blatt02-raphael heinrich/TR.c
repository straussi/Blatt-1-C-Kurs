#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    double x = 0;
    double y = 0;
    char rz[10];
    double a,s,p,q;
    int n=2;
    printf("Gib eine Rechenaufgabe ein \n");
    scanf("%lf", &x);
    scanf(" %c", &rz);
    if (strcmp(rz, "rt") == 0 || strcmp(rz, "root") == 0 || strcmp(rz, "Wurzel") == 0) {
        printf("Sie wollen die n-te Worzel ziehen? Na dann gib mal ein n ein!\n");
        scanf("%d", &n);
        double r = pow(x, 1.0/n);
        printf("Die %d-te Worzel aus %lf ist %lf\n", n, x, r);
    }
    else {
        scanf("%lf", &y);
        switch (rz[0]) {
            case '+':
                a = x + y;
                printf("Das Ergebnis von %lf %c %lf ist: %lf!\n", x, rz, y, a);
                break;
            case '-':
                s = x - y;
                printf("Das Ergebnis von %lf %c %lf ist: %lf!\n", x, rz, y, s);
                break;
            case '*':
                p = x * y;
                printf("Das Ergebnis von %lf %c %lf ist: %lf!\n", x, rz, y, p);
                break;
            case '/':
                if (y == 0) {
                    printf("Du mathematische Wildsau! IR ist doch ein nullteilerfreier Körper!");
                }
                else {
                    q = x / y;
                    printf("Das Ergebnis von %lf %c %lf ist: %lf!\n", x, rz, y, q);
                }
                break;
            default:
                printf("Oh Herr, lass Hirn herab! Das ist doch keine Rechenaufgabe!");
                break;
        }
    }
return 0;
}


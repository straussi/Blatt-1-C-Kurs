#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    double x = 0;
    double y = 0;
    char rz;
    char cpx[5];
    double a,s,p,q;
    int n=2;
    int ff;
    long fr=1;
    int i=1;
    ff = (int)x;
    double PI = (double)3.14159265;
    printf("Gib eine Rechenaufgabe ein: \n");
    scanf("%lf", &x);
    scanf(" %c", &rz);
    switch (rz) {
            case 'r':
                printf("Sie wollen die n-te Worzel ziehen? Na dann gib mal ein n ein!\n");
                scanf("%d", &n);
                double nroot = pow(x, 1.0/n);
                    if (n==2) {
                    printf("Die Quadratworzel aus %lf ist %lf!\n", x, nroot);
                    }
                    else {
                        if (n==3) {
                            printf("Die Kubikworzel aus %lf ist %lf!\n", x, nroot);
                        }
                        else {
                    printf("Die %d-te Worzel aus %lf ist %lf!\n", n, x, nroot);
                    }
                    }
                break;
            case '+':
                scanf("%lf", &y);
                a = x + y;
                printf("Das Ergebnis von %lf %c %lf ist: %lf!\n", x, rz, y, a);
                break;
            case '-':
                scanf("%lf", &y);
                s = x - y;
                printf("Das Ergebnis von %lf %c %lf ist: %lf!\n", x, rz, y, s);
                break;
            case '*':
                scanf("%lf", &y);
                p = x * y;
                printf("Das Ergebnis von %lf %c %lf ist: %lf!\n", x, rz, y, p);
                break;
            case '/':
                scanf("%lf", &y);
                if (y == 0) {
                    printf("Sie mathematische Wildsau! IR ist doch ein nullteilerfreier K\x94rper!");
                }
                else {
                    q = x / y;
                    printf("Das Ergebnis von %lf %c %lf ist: %lf!\n", x, rz, y, q);
                }
                break;
            case 's':
                printf("Bogenma\xe1 oder Gradma\xe1? Antworte mit RAD oder DEG!\n");
                char am[3];
                scanf("%s", &am);
                    if(strcmp(am, "RAD") == 0){
                        double sinrad = sin(x);
                        printf("Der Sinus von %lf ist: %lf! \n", x, sinrad);
                    }
                    else{
                        double sindeg = sin((x * PI)/180);
                        printf("Der Sinus von %lf Grad ist: %lf! \n", x, sindeg);
                    }
                break;

            case 'c':
                printf("Bogenma\xe1 oder Gradma\xe1? Antworte mit RAD oder DEG!\n");
                char bm[3];
                scanf("%s", &bm);
                     if(strcmp(am, "RAD") == 0){
                         double cosrad = cos(x);
                         printf("Der Cosinus von %lf ist: %lf! \n", x, cosrad);
                     }
                     else{
                         double cosdeg = cos((x * PI)/180);
                         printf("Der Cosinus von %lf Grad ist: %lf! \n", x, cosdeg);
                     }
                break;

            default:
                printf("Oh Herr, lass Hirn herab! Das ist doch keine Rechenaufgabe!");
                break;
        }
}
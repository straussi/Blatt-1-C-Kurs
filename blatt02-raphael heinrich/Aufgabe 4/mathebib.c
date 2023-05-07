#include <math.h>
#include <stdio.h>

int main() {
    double sw=1;
    double afc=0;
    double ewc=1;
    double afexp=-1;
    double ewexp=1;
    double afln=0.5;
    double ewln=2.8;
    double afrt=0;
    double ewrt=1;
    double afnorm=-1;
    double ewnorm=1;
    char funktion='c';
    printf("Gib einen Funktionennamen ein, deren Wertetabelle du errechnen lassen möchtest. \n Hierbei steht: \n 'c' für Cosinus, \n 'e' für die natürliche Exponentialfunktion, \n 'l' für den natürlichen Logarithmus, \n 'r' für die Quadratwurzel und\n 'n' für den Absolutbetrag.\n");
    scanf("%c", &funktion);
    if(funktion=='c') {
        printf("Gib einen Cosinus-Definitionsbereich ein! \n Anfangswert:");
        scanf("%lf", &afc);
        printf("Endwert: \n");
        scanf("%lf", &ewc);
        printf("Schrittweite: \n");
        scanf("%lf", &sw);
            FILE *file = fopen("wertepaareCOS.txt", "w");
            double x;
                for (x = afc; x <= ewc; x+=sw) {
                    double cosi = cos(x);
                    fprintf(file, "%.2f, %.2f \n", x, cosi);
                    }
            fclose(file);
        printf("Die Wertepaare (x|cos(x)) im Bereich [%lf,%lf] wurden in 'wertepaareCOS.txt' abgespeichert. \n)", afc, ewc);
    } else if (funktion=='e') {
        printf("Gib einen natürliche-Exponentialfunktion-Definitionsbereich ein! \n Anfangswert:");
        scanf("%lf", &afexp);
        printf("Endwert: \n");
        scanf("%lf", &ewexp);
        printf("Schrittweite: \n");
        scanf("%lf", &sw);
            FILE *file = fopen("wertepaareEXP.txt", "w");
            double x;
                for (x = afexp; x <= ewexp; x+=sw) {
                    double expo = exp(x);
                    fprintf(file, "%.2f, %.2f \n", x, expo);
                    }
            fclose(file);
        printf("Die Wertepaare (x|exp(x)) im Bereich [%lf,%lf] wurden in 'wertepaareEXP.txt' abgespeichert. \n)", afexp, ewexp);
    } else if (funktion=='l') {
        printf("Gib einen natürlicher-Logarithmus-Definitionsbereich ein! \n Anfangswert:");
        scanf("%lf", &afln);
        printf("Endwert: \n");
        scanf("%lf", &ewln);
        printf("Schrittweite: \n");
        scanf("%lf", &sw);
            FILE *file = fopen("wertepaareLN.txt", "w");
            double x;
                for (x = afln; x <= ewln; x+=sw) {
                    double logi = log(x);
                    fprintf(file, "%.2f, %.2f \n", x, logi);
                    }
            fclose(file);
        printf("Die Wertepaare (x|ln(x)) im Bereich [%lf,%lf] wurden in 'wertepaareLN.txt' abgespeichert. \n)", afln, ewln);
    } else if (funktion=='r') {
        printf("Gib einen Quadratwurzel-Definitionsbereich ein! \n Anfangswert:");
        scanf("%lf", &afrt);
        printf("Endwert: \n");
        scanf("%lf", &ewrt);
        printf("Schrittweite: \n");
        scanf("%lf", &sw);
            FILE *file = fopen("wertepaareRT.txt", "w");
            double x;
                for (x = afrt; x <= ewrt; x+=sw) {
                    double worzel = sqrt(x);
                    fprintf(file, "%.2f, %.2f \n", x, worzel);
                    }
            fclose(file);
        printf("Die Wertepaare (x|x^(1/2)) im Bereich [%lf,%lf] wurden in 'wertepaareRT.txt' abgespeichert. \n)", afrt, ewrt);
    } else if (funktion=='n') {
        printf("Gib einen Absolutbetrag-Definitionsbereich ein! \n Anfangswert:");
        scanf("%lf", &afnorm);
        printf("Endwert: \n");
        scanf("%lf", &ewnorm);
        printf("Schrittweite: \n");
        scanf("%lf", &sw);
            FILE *file = fopen("wertepaareABS.txt", "w");
            double x;
                for (x = afnorm; x <= ewnorm; x+=sw) {
                    double normi = fabs(x);
                    fprintf(file, "%.2f, %.2f \n", x, normi);
                    }
            fclose(file);
        printf("Die Wertepaare (x|(|x|)) im Bereich [%lf,%lf] wurden in 'wertepaareABS.txt' abgespeichert. \n)", afnorm, ewnorm);
    }
}
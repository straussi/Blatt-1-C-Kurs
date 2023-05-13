#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double array[1000][100];
    int i;
    int j;
    for (i=0; i <= 999; ++i) {
        for (j=0; j <= 99; j++) {
            double b = rand()/(double)RAND_MAX;
            array[i][j] = b;
        }
    }

    long a,b,c,d,e,f,g,h,k,l = 0;

    for (i = 0; i <= 999; ++i) {
        for (j = 0; j <= 99; j++) {
            if (array[i][j] >= 0 && array[i][j] < 0.1) {
                a++;
            } else if (array[i][j] >= 0.1 && array[i][j] < 0.2) {
                b++;
            } else if (array[i][j] >= 0.2 && array[i][j] < 0.3) {
                c++;
            } else if (array[i][j] >= 0.3 && array[i][j] < 0.4) {
                d++;
            } else if (array[i][j] >= 0.4 && array[i][j] < 0.5) {
                e++;
            } else if (array[i][j] >= 0.5 && array[i][j] < 0.6) {
                f++;
            } else if (array[i][j] >= 0.6 && array[i][j] < 0.7) {
                g++;
            } else if (array[i][j] >= 0.7 && array[i][j] < 0.8) {
                h++;
            } else if (array[i][j] >= 0.8 && array[i][j] < 0.9) {
                k++;
            } else if (array[i][j] >= 0.9) {
                l++;
            } else {
                printf("Irgendwas scheint schiefgelaufen zu sein :(\n");
            }
        }
    }
    long histo[10] = { a,b,c,d,e,f,g,h,k,l};
    long sum = a+b+c+d+e+f+g+h+l+k;
    double mwa = (double)a /sum;
    double mwb = (double)b /sum;
    double mwc = (double)c /sum;
    double mwd = (double)d /sum;
    double mwe = (double)e /sum;
    double mwf = (double)f /sum;
    double mwg = (double)f /sum;
    double mwh = (double)h /sum;
    double mwk = (double)k /sum;
    double mwl = (double)l /sum;
    printf(" [0.0,0.1): %2.4f % \n [0.1,0.2): %2.4f %\n [0.2,0.3): %2.4f %\n [0.3,0.4): %2.4f %\n [0.4,0.5): %2.4f %\n [0.5,0.6): %2.4f %\n [0.6,0.7): %2.4f %\n [0.7,0.8): %2.4f %\n [0.8,0.9): %2.4f %\n [0.9,1.0): %2.4f %\n", mwa, mwb, mwc, mwd, mwe, mwf, mwg, mwh, mwk, mwl);
}
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
    double mwa = a/sum;
    double mwb = b/sum;
    double mwc = c/sum;
    double mwd = d/sum;
    double mwe = e/sum;
    double mwf = f/sum;
    double mwg = f/sum;
    double mwh = h/sum;
    double mwk = k/sum;
    double mwl = l/sum;
    printf(" [0.0,0.1): %2.1f % \n [0.1,0.2): %2.1f %\n [0.2,0.3): %2.1f %\n [0.3,0.4): %2.1f %\n [0.4,0.5): %2.1f %\n [0.5,0.6): %2.1f %\n [0.6,0.7): %2.1f %\n [0.7,0.8): %2.1f %\n [0.8,0.9): %2.1f %\n [0.9,1.0): %2.1f %\n", mwa, mwb, mwc, mwd, mwe, mwf, mwg, mwh, mwk, mwl);
}
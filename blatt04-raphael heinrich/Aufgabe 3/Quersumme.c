#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N=0;
    int S=0;
    printf("Gib eine natürliche Zahl ein: ");
    scanf("%d", &N);
    int t = N;

    for(int j = 1; t/10>=1; j++) {
        int r = t%10;
        t = t/10;
        S = S + r;
    }
    S = S + t%10;
    printf("Die Quersumme von %d ist: %d. \n", N, S);
    
}
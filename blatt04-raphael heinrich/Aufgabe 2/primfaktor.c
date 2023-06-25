#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
     int N;
    printf("Gib eine natürliche Zahl N ein: ");
    scanf("%d", &N);
    
    int* primeFactors = NULL; // Array Primfaktoren
    int factorCount = 0; // Anzahl Primfaktoren
    
    for (int l = 2; l <= N; ++l) {
        if (N % l == 0) {
            factorCount++;
            primeFactors = realloc(primeFactors, factorCount * sizeof(int)); 
            primeFactors[factorCount - 1] = l; 
            N /= l; 
            l--; 
        }
    }
    
    printf("Primfaktoren von N: ");
    for (int i = 0; i < factorCount; ++i) {
        printf("%d ", primeFactors[i]);
    }
    printf("\n");
    
    free(primeFactors);
}
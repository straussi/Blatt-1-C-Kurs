#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N=2;
    printf("Gib eine Zahl N ein. ");
    scanf("%d", &N);

    int * array = malloc((N+1)*sizeof(int));

    for(int i=0; i<=N; ++i) {
        array[i] = i;
        }
    array[0] = 0;
    array[1] = 1;

    for (int i=2; i<=N; ++i) {
        if(array[i] != 0) {
            for (int l = i+i; l <= N; l += i) {
                array[l] = 0;
            }
        }
    }
    printf("Alle Primzahlen bis %d sind: ", N);
    for (int i=2; i <= N; ++i) {
        if (array[i] != 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
    free(array);

}
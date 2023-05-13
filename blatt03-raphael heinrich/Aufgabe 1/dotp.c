#include <stdio.h>

int main() {
    int i = 0;
    int produkt;
    double va[7] = { 3, 2, 1, 5, 7, 2, -1};
    double vb[7] = { -7, 3, 7, 5, 6, 8, 1};
    double skp = 0;
    
    
    for(i = 0; i < 7; i++)
    {
        produkt = va[i]*vb[i];
        skp += produkt;
    }
    
    printf("Das Skalarprodukt der Vektoren beträgt: %lf \n", skp);
}

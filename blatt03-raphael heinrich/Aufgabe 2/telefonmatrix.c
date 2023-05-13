#include <stdio.h>
#include <math.h>

int main() {

int va[9];
int vb[3][3];

    for(int i=0; i<9; ++i) {
        va[i] = i + 1;
        vb[i/3][i%3] = i + 1;
    }

printf(" %d %d %d \n %d %d %d \n %d %d %d \n", va[6], va[7], va[8], va[3], va[4], va[5], va[0], va[1], va[2]);
}
#include <stdio.h>

int main(void){
    int x, y, z, k, l;
    scanf("%d %d %d %d %d", &x, &y, &z, &k, &l);
    fprintf(stderr, "I'm an error printer, please see this error and handle it correctly\n");
    fprintf(stdout, "Nahhh, the error printer above me is screaming and no one cares\n");
    fprintf(
        stdout, "%d %d %d %d %d\nThe numbers should be: 1 2 3 4 5",
        x, y, z, k, l
    );
}
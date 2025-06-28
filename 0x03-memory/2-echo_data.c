#include <stdio.h>

void echo_data(void *data) {
    
    
    int *ptr = (int *) data;
    printf("%d\n", *ptr);
}

int main() {
    
    int x = 9;
    echo_data(&x);
    
    return 0;
}

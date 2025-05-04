#include <stdio.h>
int main() {
    printf("hello world\n");
    int x = 5;

    if (0 == 1) {
        ghostFunction(); // despite this codition  is impossible to excute but there is an  erorr or at least  a warning  
        //this is the difference between interpreter & compiler 
    }

    return 0;
}

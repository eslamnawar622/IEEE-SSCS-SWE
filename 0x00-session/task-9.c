#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int n;
    int last_digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n % 2 == 0) {
        printf("Number %d is even\n", n);
    } else {
        printf("Number %d is odd\n", n);
    }
    
    
    

    last_digit = abs(n) % 10;
    printf("The last digit is: %d\n", last_digit);




    if (last_digit > 5) {
        printf("The last digit is more than 5\n");
    } else if (last_digit < 5) {
        printf("The last digit is less than 5\n");
    } else {
        printf("The last digit is 5\n");
    }



    return 0;
}


#include <stdio.h>

int main() {
    int num;
    printf("Enter a number from 1 to 9: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 9) {
        printf(" %c\n", num + 48);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}

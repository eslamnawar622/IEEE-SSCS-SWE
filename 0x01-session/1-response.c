#include <stdio.h>

int is_response_detected(int strength) {
    if (strength > 50) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int strength;
    
//test by yourself 5 times       //test by yourself 5 times         //test by yourself 5 times 
    
    for (int i = 0; i < 5; i++) { 
        printf("Enter signal strength: ");
        scanf("%d", &strength);
        
        

        if (is_response_detected(strength)) {
            printf("Response detected\n");
        } else {
            printf("No response\n");
        }
    }
    
//we alse can make  it by an allready array and tst itself  but it is better .
    return 0;
}

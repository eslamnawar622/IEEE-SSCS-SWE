#include <stdio.h> 

int signal_strength = 0;

void boost_signal(int n) {  //we can use int boost_signal there will be the same 
// result but as a syntax ,it will be false .
    
    int signal_strength = 100;
    printf("booster: signal strength = %d\n",n );
}

int main() {
    
    printf("global signal strength before boost = %d\n", signal_strength);
    boost_signal(90);
    printf("global signal strength after boost = %d\n", signal_strength);

    return 0;
    
}

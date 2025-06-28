#include <stdio.h>

void status (int n){
    if (n>0)  printf("positive \n")  ;
    else if (n<0) printf("Negative  \n")  ;//it is void we can't make return and the print at main .
    else    printf("Zero   \n" )   ;
}

int main()
{
    
    void (*function_pointe)  (int) ;
    function_pointe = status;
    function_pointe(-15) ;
    return 0;
    
}

#include <stdio.h>
#define SQUARE(x) ((x)*(x)) 
//focus ... there many and many expressions  are false for exps
//x**x   , (x)*(x)  ---> int result = 10 / (1 + 1) * (1 + 1) 
//x*x ---> 1+2*1+2        (x)*x----> (1+2)*1+2   Mult  comes firstly 

int main()
{
    int x =SQUARE(3)  ;
    printf("%d \n" ,x)   ;
    int y =SQUARE(1+2)  ;
    printf("%d \n" ,y)   ;

    

    return 0;
}

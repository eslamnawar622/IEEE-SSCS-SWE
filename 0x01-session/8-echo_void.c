#include <stdio.h>
void echo(int n)  {
    
    if (n==0) {
        return ;
        
    }
    printf("%d: Echo...\n", n);
        echo(n-1)   ;  //or return echo(n-1 )   both will run but the first is
                         //much better than the secound .
}

int main()
{ 
 echo(10)    ;
 
    return 0;
} 

#include <stdio.h>
int sum_layers(int n) {
    if (n==0)  return 0 ;
    
    return n+sum_layers(n-1)  ;
    
    
    
}

int main()
{ 
   int sum =sum_layers(9)  ;
   int sum2=sum_layers(4)  ;
  printf("sum:%d  \n"  ,sum)  ;
  printf("sum2:%d  \n",sum2)   ;
} 

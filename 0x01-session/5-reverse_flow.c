#include <stdio.h>

void swap(int *ptr1 , int *ptr2) {
    
    int c ;
    c= *ptr1 ;
    *ptr1 =*ptr2 ;
    *ptr2 = c ;
    
}

int main()
{
   int a =5 ,b=10  ;
      printf (" before = %d , %d \n" ,a,b) ;

   swap(&a ,&b ) ;
   

      printf ("Afte = %d , %d \n" ,a,b ) ;

    return 0;
}

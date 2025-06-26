#include <stdio.h>

int main()
{
  int signal =98 ;
  int * ptr ;
  ptr =&signal ;
  
  printf("%d \n ",signal ) ;
  printf("%p \n", ptr )  ;

    return 0;
}

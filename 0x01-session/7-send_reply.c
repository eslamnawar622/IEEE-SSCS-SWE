#include <stdio.h>


 char* get_reply(){
     
     static char reply[] = "sadio mane ";

     return reply ;
 }

int main()
{
    char* var =  get_reply()  ;
     
    //printf("%s \n"   ,reply )  ;  reply doesn't defined so
    //we wil move the value to another var
    printf( "%s  \n ",var )   ;

    return 0; 
}

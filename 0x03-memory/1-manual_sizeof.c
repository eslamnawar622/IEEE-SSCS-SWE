#include <stdio.h>
int manual_sizeof();
int manual_sizeof2();

//"What I'm going to do is create an array and define two pointers
//I will make each pointer point to a consecutive element in the array so that when I subtract them,
//the result will be the number of elements between them, 
//which is 1. Since I know that on my 64-bit machine the size of an int is 4 bytes, 
//I will multiply the result by 4 to get the size in bytes.

//soln 1

int manual_sizeof()  { 
    int arr[2]  ;
    int* ptr1=&arr[0]   ;
    int* ptr2=&arr[1]     ;
     return ptr2 - ptr1   ;
 
}

//soln2 
//we will suppose there is many computers and we don't know there are 64 or 32 bits 
// there is a problem in casting but will appear only a warning

int manual_sizeof2()  { 
    int arr[2]  ;
    char* ptr1=&arr[0]   ;
    char* ptr2=&arr[1]    ;
     return ptr2 - ptr1   ;
}
int main()
{
  int size=manual_sizeof()   ;
  
  printf("%d   \n "  ,size*4 )  ;
  int size2=manual_sizeof2()   ;
    printf("%d   \n "  ,size2 )  ;
  

    return 0;
}

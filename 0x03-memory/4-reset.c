
#include <stdio.h>
int  tot_counter  ;

int access_one() {
     static int local_counetr1 =0  ;
       local_counetr1++   ;
       tot_counter++    ;
       printf("local_counetr1 :%d \n",local_counetr1)   ;
      
      return local_counetr1   ;
      
}


int access_two() {
      static int local_counetr2 =0   ;
      local_counetr2++   ;
      tot_counter++    ;
      printf("local_counetr2 :%d \n",local_counetr2)   ;
      
      return local_counetr2   ;
}
int main()
{
     
    access_one()  ;
    access_one()  ;
    access_one()  ;
    access_one()  ;
    access_one()  ;
    

    access_two()  ;
    access_two()  ;
    access_two()  ;
    access_two()  ;
    access_two()  ;
    

    printf("tot_counter :%d" ,tot_counter)   ;
    

    return 0;
}

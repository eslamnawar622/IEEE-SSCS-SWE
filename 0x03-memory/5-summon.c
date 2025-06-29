#include <stdio.h>
#include <stdlib.h>

 int *summon_allies(int *allies, int n) {
  allies =  malloc(n*sizeof(int))  ;
  
      if (allies==NULL) {
      printf("failed")  ;
        return NULL;  // توقف فوراً عند الفشل
      } 
  
     printf("Enter %d the array :\n", n);
      for (int i = 0; i < n; i++) {
        scanf("%d", &allies[i]);
      }
 return  allies       ;
 } 


int main()
{
    
  int n ;
  scanf("%d",&n)   ;
  int *ptr  =summon_allies(NULL, n)   ;
   if (ptr == NULL) {
        printf("Error: allocation failed.\n");
        return 1; 
   }
  printf(" %p \n" ,ptr )  ;


 free(ptr);
    

    return 0;
}

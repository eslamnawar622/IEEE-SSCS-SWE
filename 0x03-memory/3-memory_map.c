#include <stdio.h>
#include <stdlib.h> //---malloc

int global_var = 10;

int main()
{
    int *global_p = &global_var;

    int local_var = 5;
    int *local_p = &local_var  ;

    int *global_heap_p = (int *) malloc(sizeof(int))   ;
    *global_heap_p = 15;

    char *string_p = "string";

    printf("(%p : data) -> %d\n", global_p, *global_p) ;
    printf("(%p : stack) -> %d\n", local_p, *local_p) ;
    printf("(%p : heap) -> %d\n", global_heap_p, *global_heap_p) ;
    printf("(%p : rodata) -> %s\n", string_p, string_p)  ;

    free(global_heap_p) ;
    return 0;
}

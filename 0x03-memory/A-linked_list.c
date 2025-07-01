#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data  ;
   struct Node *next  ;
}Node  ;


Node *create_newnode(int data)  {
    Node *newnode =malloc(sizeof(Node))  ;  //it is not necessary to write void*  in c  
    // c lanagauge makes it automaticlly  
    newnode ->data =data ;
    newnode ->next =NULL  ;
    return newnode   ; //return the address
    
}


int main() {
    Node *first =create_newnode(1)  ;
    Node *second =create_newnode(2)  ;
    Node *third  =create_newnode(3)  ;
    
    //now we made lists but arenot linked  .
    
    first ->next= second ; 
    second ->next= third ;
    third->next =NULL  ;
    
    //WE MAKE LINKED LIST  
    
    printf("linked list data  is ")  ;
   printf(" (%d   "  ,first->data)   ;
   printf("%d   "  ,second->data)   ;
   printf("%d)   "  ,third->data)   ;

    return 0;
}

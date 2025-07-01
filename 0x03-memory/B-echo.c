//"The program name is always the first element in the array,
//and this array contains the line I typed including the program name
//. If I can start from the second element, 
//that would be the beginning of the actual line that was typed — so that’s fine.


#include <stdio.h>


int main(int argc,char* argv[])
{
    if (argc ==1 ){   // i don't  write any thing it is the program name 
        printf("Silence. Nothing came through.  \n")  ;
    
    }
    else{
        for(int i=1;i<argc ;i++) {   //start from the second element 
            printf("%s \n"  ,argv[i])  ;
        }
    }
    return 0;
}

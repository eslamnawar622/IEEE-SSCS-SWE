#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m ;   //num of rows Matrix_A
    int n ;   //num of cols Matrix_A
    int j ;  //num of rows Matrix_B
    int k ;  //num of cols Matrix_B
    
    
    printf("rows_A is :") ;
    scanf("%d",&m)  ;
    
    printf("coLs_A is :") ;
    scanf("%d",&n)   ;
    
    printf("rows_B is :") ;
    scanf("%d",&j)  ;
    
    printf("cols_B is :") ;
    scanf("%d",&k)   ;
    
    if(n!=j){
        //اكيد مش بعد محجز كل ده لو لفقيت انهم اصلا مش بيساوو بعض اطلع من البرنامد طب مكتن من الاول 
        
        printf("Multibly is impossible \n") ;
        return 1 ; 
      
    }
    
    //هستخدم callock مش الmalloc علشان تبقي معمولها intialize بصفر علشن في داله الضرب انا هجمع حدود 

int* Matrix_A =calloc(m*n,sizeof(int ))  ;
int* Matrix_B =calloc(j*k,sizeof(int ))  ;
int* res      =calloc(m*k,sizeof(int ))  ;
    

    for(int a=0 ;a<m ;a++)  {
        for(int b=0 ;b<n ;b++) {
            printf("Matrix_A [%d][%d]= ",a,b)   ;
            scanf("%d" ,&Matrix_A[a*n+b] );
        }
    }
    
       for(int a=0 ;a<m ;a++)  {
         for(int b=0 ;b<n ;b++) {
            printf("%d " ,Matrix_A[a*n+b] ) ;
          if (b==(n-1)) printf("\n") ;
            
        }
    }
    
    

     for(int c=0 ;c<j;c++)  {
        for(int d=0 ;d<k ;d++) {
              printf("Matrix_B [%d][%d]= ",c,d)   ;
            scanf("%d" ,&Matrix_B[c*k+d] ) ;
            
        }
       
    }
        for(int c=0 ;c<j ;c++)  {
        for(int d=0 ;d<k ;d++) {
            printf("%d " ,Matrix_B[c*k+d] ) ;
          if (d==(k-1)) printf("\n") ;
}
}





int rows_res =m;
int cols_res =k;




printf("rows_res =%d\n",m)  ;
printf("cols_res =%d \n",k)  ;

 
 
 for (int e=0 ;e<m ;e++){
     for(int f=0 ;f<k ;f++){
         for (int x=0 ; x<n ;x++){     //or x<j  bec j==n بيمثل عدد عمليات الضرب اللي هتتجمع يعني 
                                    //  5*9 +3*5 +2*3  هنا ال x =3 
            
             res[e*k+f] += Matrix_A[e*n+x] * Matrix_B[k*x+f]   ;
         }
     }
 }
 
 printf("res_matrix = \n") ;
   for (int e=0 ;e<m ;e++){
       for(int f=0 ;f<k ;f++){ 
           printf("%d ",res[e*k+f]) ;
       }
       printf("\n") ;
   
   }
   
   
   // العرض في ملف جديد 
 FILE* file = fopen("matrix_result.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;   //if  not main 
    }
    
    
    

    fprintf(file, "Result Matrix (%d x %d):\n", m, k);
    for (int e = 0; e < m; e++) {
        for (int f = 0; f < k; f++) {
            fprintf(file, "%d ", res[e * k + f]);
        }
        fprintf(file, "\n");
    }

    fclose(file); 
    
    
    free(Matrix_A);
    free(Matrix_B);
    free(res);

    printf("Result saved in matrix_result.txt\n");

   
  
 return 0;
}

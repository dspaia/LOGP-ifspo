#include <stdio.h>

int main(){
   int A[20], B[30], C[50], x;
   
   printf("Elementos da Matriz A:\n");
    for (int i = 0; i < 20; i++) {
        A[i] = i + 1; 
        printf("A[%d] = %d\n", i, A[i]);
    }

    
    printf("Elementos da Matriz B:\n");
    for (int i = 0; i < 30; i++) {
        B[i] = i + 21; 
        printf("B[%d] = %d\n", i, B[i]);
    
    }

    for (int i = 0; i < 20; i++) {
        C[i] = A[i];  

    }

    for (int i = 0; i < 30; i++) {
        C[i + 20] = B[i]; 
        
    }


    printf("Matriz C:\n");
    printf("C = [");
    for (int i = 0; i < 50 - 1; i++) {
        for (int j = 0; j < 50 - i - 1; j++) {
            if (C[j] < C[j + 1]) { 
                x = C[j];
                C[j] = C[j + 1];
                C[j + 1] = x;
            }
        }
        
    }
    for (int i = 0; i < 50; i++)
    {
        if (i == 49){
            printf("%d]", C[i]);
        }else{
            printf("%d, ", C[i]);
        }
    }
    
    return 0;
}


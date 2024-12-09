#include <stdio.h>

int main(){
   int A[5], B[5], C[10];
   
   printf("Insira 5 elementos da Matriz A:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Insira 5 elementos da Matriz B:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        C[i] = A[i];
        C[i+5] = B[i];
    }

    printf("Matriz C:\n");
    printf("C = [");
    for (int i = 0; i < 10; i++)
    {
        
        if (i == 9){
            printf("%d]", C[i]);
        }else{
            printf("%d, ", C[i]);
        }
        
    }
    
    return 0;

}
#include <stdio.h>

int main(){
    int A[7], B[7], C[7][7];

    printf("Insira elementos da Matriz A:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    printf("Insira elementos da Matriz B:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }
    
    printf("Matriz C:\n");
    for (int i = 0; i < 7; i++)
    {
       printf("C[%d][%d]\n", A[i], B[i]);
    }
    
}
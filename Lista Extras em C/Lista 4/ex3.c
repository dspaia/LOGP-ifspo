#include <stdio.h>

int main(){
    int A[5], B[5], C[5];

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
    
    printf("Resultados:\n");
    for (int i = 0; i < 5; i++)
    {
        C[i] = A[i] - B[i];
        printf("C[%d] = %d - %d = %d\n", i, A[i], B[i], C[i]);
    }
    
    return 0;
}
#include <stdio.h>

int main() {
    int A[8], B[8];

    printf("Insira 8 elementos da Matriz A:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Elementos da Matriz B:\n");
    for (int i = 0; i < 8; i++)
    {
        B[i] = A[i] * A[i];
        printf("B[%d] = %d\n", i, B[i]);
    }
    

}
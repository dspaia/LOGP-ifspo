#include <stdio.h>

int main() {
    int A[10], B[10];

    printf("Insira 10 elementos para a matriz A:\n");
    for (int i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);

    }

    for (int i = 0; i < 10; i++) {
        B[i] = A[9 - i]; 

    }

    printf("\nMatriz B (invertida):\n");
    for (int i = 0; i < 10; i++) {
        printf("B[%d] = %d\n", i, B[i]);

    }

    return 0;

}
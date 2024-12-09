#include <stdio.h>

int main(){
    int A[12], B[12], C[12], x, y, z;

    printf("Insira 12 elementos para a matriz A:\n");
    for (int i = 0; i < 12; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);

    }

    for (int i = 0; i < 12 - 1; i++) {
        for (int j = 0; j < 12 - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                x = A[j];
                A[j] = A[j + 1];
                A[j + 1] = x;
            }
        }
    }

    printf("\nMatriz A em ordem crescente:\n");
    for (int i = 0; i < 12; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    printf("Insira 12 elementos para a matriz B:\n");
    for (int i = 0; i < 12; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);

    }

    for (int i = 0; i < 12 - 1; i++) {
        for (int j = 0; j < 12 - i - 1; j++) {
            if (B[j] > B[j + 1]) {
                y = B[j];
                B[j] = B[j + 1];
                B[j + 1] = y;
            }
        }
    }

    printf("\nMatriz B em ordem crescente:\n");
    for (int i = 0; i < 12; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    for (int i = 0; i < 12 - 1; i++) {
        for (int j = 0; j < 12 - i - 1; j++) {
            if (C[j] > C[j + 1]) {
                z = C[j];
                C[j] = C[j + 1];
                C[j + 1] = z;
            }
        }
    }

    printf("Matriz C em ordem crescente:\n");
    for (int i = 0; i < 12; i++)
    {
        C[i] = A[i] + B[i];
        printf("C[%d] = A[%d] + B[%d] = %d + %d = %d\n", i, i, i, A[i], B[i], C[i]);
    }
    
}
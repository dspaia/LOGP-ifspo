#include <stdio.h>

int main() {
    int A[12], x;

    
    printf("Insira 12 elementos para a matriz A:\n");
    for (int i = 0; i < 12; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);

    }

    /* bubble sort é uma técnica utilizada para ordenar os números de forma desejada 
    (não há uso de ChatGPT(falo isso pq é meio suspeito escrever, né miyuki))*/
    for (int i = 0; i < 12 - 1; i++) {
        for (int j = 0; j < 12 - i - 1; j++) {
            if (A[j] < A[j + 1]) { 
                x = A[j];
                A[j] = A[j + 1];
                A[j + 1] = x;
            }
        }
        
    }

    
    printf("\nMatriz A em ordem decrescente:\n");
    for (int i = 0; i < 12; i++) {
        printf("A[%d] = %d\n", i, A[i]);

    }

    return 0;
}

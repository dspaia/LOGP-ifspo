#include <stdio.h>

int rotina(int *vetor, int t, int elem) {
    for (int i = 0; i < t; i++) {
        if (vetor[i] == elem) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int A[8], B[8], x;

    printf("Insira 8 elementos para a matriz A:\n");
    for (int i = 0; i < 8; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 8; i++) {
        B[i] = A[i] * 5;
    }

    for (int i = 0; i < 8 - 1; i++) {
        for (int j = 0; j < 8 - i - 1; j++) {
            if (B[j] > B[j + 1]) {
                x = B[j];
                B[j] = B[j + 1];
                B[j + 1] = x;
            }
        }
    }

    printf("\nMatriz B em ordem crescente:\n");
    for (int i = 0; i < 8; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    int elem;
    printf("\nDigite um elemento para pesquisar na matriz B: ");
    scanf("%d", &elem);

    int pos = rotina(B, 8, elem);
    if (pos != -1) {
        printf("Elemento encontrado na posicao B[%d].\n", pos);
    }
    else {
        printf("Elemento nao encontrado na matriz B\n");
    }

    return 0;
}
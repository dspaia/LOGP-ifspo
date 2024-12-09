#include <stdio.h>

void lerA(int * A, int n) {
    printf("Digite os elementos de A:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
}

void lerB(int * B, int n) {
    printf("Digite os elementos de B:\n");
    for (int i = 0; i < n; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }
}

void juntarAB(int * A, int * B, int * C, int n) {
    for (int i = 0; i < n; i++) {
        C[i] = A[i];
        C[i + n] = B[i];
    }
}

void exibirC(int * C, int n) {
    printf("Elementos de C:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
}

int main() {
    int A[30], B[30], C[60];

    lerA(A, 30);
    lerB(B, 30);
    juntarAB(A, B, C, 30);
    exibirC(C, 60);

    return 0;
}

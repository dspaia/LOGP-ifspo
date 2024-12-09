#include <stdio.h>

void ordenar(int *V, int n) {
    int t;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (V[j] > V[j + 1]) {
                t = V[j];
                V[j] = V[j + 1];
                V[j + 1] = t;
            }
        }
    }
}

int main() {
    int A[12], B[12], C[12];

    for (int i = 0; i < 12; i++) {
        scanf("%d", &A[i]);
    }
    ordenar(A, 12);

    for (int i = 0; i < 12; i++) {
        scanf("%d", &B[i]);
    }
    ordenar(B, 12);

    for (int i = 0; i < 12; i++) {
        C[i] = A[i] + B[i];
    }
    ordenar(C, 12);

    for (int i = 0; i < 12; i++) {
        printf("%d\n", C[i]);
    }

    return 0;
}


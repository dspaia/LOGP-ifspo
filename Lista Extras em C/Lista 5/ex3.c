#include <stdio.h>

long long fatorial(int x) {
    if (x == 0 || x == 1) {
        return 1; 
    }
    return x * fatorial(x - 1); 
}

int main(){
    int A[15], B[15];
    long long y;

    for (int i = 0; i < 15; i++)
    {
        A[i] = i + 1;
        printf("A[%d]: %d\n", i, A[i]);
        
    }

    for (int i = 0; i < 15; i++) {
        B[i] = fatorial(A[i]);
    }

    for (int i = 0; i < 15 - 1; i++) {
        for (int j = 0; j < 15 - i - 1; j++) {
            if (B[j] > B[j + 1]) {
                y = B[j];
                B[j] = B[j + 1];
                B[j + 1] = y;
            }
        }
    }

    printf("\nMatriz B em ordem crescente:\n");
    for (int i = 0; i < 15; i++) {
        printf("B[%d] = %lld\n", i, B[i]);
    }
    
    return 0;
}
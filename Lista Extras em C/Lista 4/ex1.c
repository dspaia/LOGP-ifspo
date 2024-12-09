#include <stdio.h>

int main() {
    int A[5], B[5];

    printf("Digite 5 elementos para a matriz A:\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        B[i] = A[i] * 3;

    }

    printf("Numeros da Matriz a multiplicado por 3:");

    for (int i = -1; i < 5; i++)
    {
        printf("B[%d] * (%d * 3) = %d\n", i, A[i], B[i]);

    }
    
    return 0;
   
}

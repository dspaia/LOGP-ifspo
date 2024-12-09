#include <stdio.h>

int fatorial(int x) {
    if (x == 0 || x == 1) {
        return 1; 
    }
    return x * fatorial(x - 1); 
}

int main(){
    int A[6], B[6];

    printf("Digite 6 elementos da Matriz A:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("O Fatorial dos elementos da Matriz A são:\n");
    for (int i = 0; i < 6; i++)
    {
        B[i] = fatorial(A[i]);
        printf("%d! = %d\n", A[i], B[i]);
    }
    
    return 0;
}
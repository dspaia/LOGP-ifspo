#include <stdio.h>

int fatorial(int x) {
    if (x == 0 || x == 1) {
        return 1; 
    }
    return x * fatorial(x - 1); 
}

int main(){
    int A[10], B[10][3];

    printf("Insira elementos da Matriz A:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }


    for (int i = 0; i < 10; i++)
    {
        B[i][0] = A[i] + 5;
        B[i][1] = fatorial(A[i]); 
        B[i][2] = A[i] * A[i];

    }

    for (int i = 0; i < 10; i++)
    {
        printf("Linha B[%d] = [%d, %d, %d]\n", i, B[i][0], B[i][1], B[i][2]);
    }
    
    return 0;

}
#include <stdio.h>

int main(){
    int A[4], B[4], C[4][2];

    printf("Insira elementos da Matriz A:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    printf("Insira elementos da Matriz B:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    printf("Matriz C:\n");
    for (int i = 0; i < 4; i++)
    {
        C[i][0] = A[i] * 2;
        C[i][1] = B[i] - 5;

    }

    for (int i = 0; i < 4; i++)
    {
        printf("C[%d] = [%d, %d]\n", i, C[i][0], C[i][1]);
    }     
    
    return 0;
     
}
#include <stdio.h>

int rotina(int *vetor, int t, int elem) {
    for (int i = 0; i < t; i++) {
        if (vetor[i] == elem) {
            return i; 
        }
    }
    return -1;
}

int main(){
    int A[20], B[20], x;

    printf("Elementos da Matriz A:\n");
    for (int i = 0; i < 20; i++)
    {
        A[i] = 1 - i;
        printf("A[%d] = %d\n", i, A[i]);
    }
    printf("Elementos da Matriz B em ordem crescente:\n");
    
    for (int i = 0; i < 20; i++)
    {
        B[i] = A[i] + 2;
        
    }
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = 0; j < 20 - i - 1; j++) {
            if (B[j] > B[j + 1]) {
                x = B[j];
                B[j] = B[j + 1];
                B[j + 1] = x;
                
            }
        }
    }
    for (int i = 0; i < 20; i++)
    {
        printf("B[%d] = %d\n", i, B[i]);
        
    }
    
    

    int elem;
    printf("\nDigite um elemento para pesquisar na matriz B: ");
    scanf("%d", &elem);

    int pos = rotina(B, 20, elem);
    if (pos != -1) {
        printf("Elemento encontrado na posicao B[%d].\n", pos);
    }
    else {
        printf("Elemento nao encontrado na matriz B\n");
    }
}
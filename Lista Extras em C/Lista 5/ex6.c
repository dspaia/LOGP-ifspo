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
    int A[30], B[30];

    printf("Elementos da Matriz A:\n");
    for (int i = 0; i < 30; i++)
    {
        A[i] = i + 1;
        printf("A[%d] = %d\n", i, A[i]);
    }

    printf("Elemntos da Matriz B:\n");
    for (int i = 0; i < 30; i++)
    {
        B[i] = A[i]*A[i]*A[i];

        printf("B[%d] = %d ^ 3 = %d\n", i, A[i], B[i]);

    }

    int elem;
    printf("\nDigite um elemento para pesquisar na matriz B: ");
    scanf("%d", &elem);

    int pos = rotina(B, 30, elem);
    if (pos != -1) {
        printf("Elemento encontrado na posicao B[%d].\n", pos);
    }
    else {
        printf("Elemento nao encontrado na matriz B\n");
    }
    
    
}
#include <stdio.h>

int rotina(float * vetor, int t, float elem) {
    for (int i = 0; i < t; i++) {
        if (vetor[i] == elem) {
            return i; 
        }
    }
    return -1;
}

int main() {
    float Aluno[40], x;
    int i;

    printf("Notas dos Alunos:\n");
    for (int i = 0; i < 40; i++) {
        printf("Aluno [%d]: ", i + 1); 
        scanf("%f", &Aluno[i]);  
    }
    
    printf ("Notas:\n");
    for (int i = 0; i < 40; i++)
    {
        printf("Aluno %d: %.2f\n", i + 1, Aluno[i]);
    }

    printf("Notas em cresdente:\n");
    for (i = 0; i < 40 - 1; i++) {
        for (int j = 0; j < 40 - i - 1; j++) {
            if (Aluno[j] > Aluno[j + 1]) {
                x = Aluno[j];
                Aluno[j] = Aluno[j + 1];
                Aluno[j + 1] = x;
                
            }
        }
    }
    printf("Notas dos Alunos em ordem crescente:\n");
    for (i = 0; i < 40; i++) {
        printf("Aluno %d: %.2f\n", i + 1, Aluno[i]);

    }
    
    float elem;
    printf("\nDigite um elemento para pesquisar na matriz Aluno: ");
    scanf("%f", &elem);

    int pos = rotina(Aluno, 40, elem);
    if (pos != -1) {
        printf("Elemento encontrado na posicao Aluno[%d].\n", pos + 1);
    }
    else {
        printf("Elemento nao encontrado na matriz Aluno\n");
    }
}
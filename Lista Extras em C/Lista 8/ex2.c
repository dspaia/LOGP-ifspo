#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float notas[4];
    float media;
} Aluno;

Aluno alunos[20];

void cadastrar() {
    for (int i = 0; i < 20; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        alunos[i].media = 0;
        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
            alunos[i].media += alunos[i].notas[j];
        }
        alunos[i].media /= 4;
    }
}

void corrigir() {
    char nome[50];
    printf("Nome do aluno a corrigir: ");
    scanf(" %[^\n]", nome);
    for (int i = 0; i < 20; i++) {
        if (strcmp(alunos[i].nome, nome) == 0) {
            printf("Corrigindo notas de %s:\n", alunos[i].nome);
            alunos[i].media = 0;
            for (int j = 0; j < 4; j++) {
                printf("Nova nota %d: ", j + 1);
                scanf("%f", &alunos[i].notas[j]);
                alunos[i].media += alunos[i].notas[j];
            }
            alunos[i].media /= 4;
            return;
        }
    }
    printf("Aluno nao encontrado.\n");
}

void pesquisar() {
    char nome[50];
    printf("Nome do aluno a pesquisar: ");
    scanf(" %[^\n]", nome);
    for (int i = 0; i < 20; i++) {
        if (strcmp(alunos[i].nome, nome) == 0) {
            printf("Aluno: %s\n", alunos[i].nome);
            printf("Notas: ");
            for (int j = 0; j < 4; j++) printf("%.2f ", alunos[i].notas[j]);
            printf("\nMedia: %.2f\n", alunos[i].media);
            return;
        }
    }
    printf("Aluno nao encontrado.\n");
}

void listar_aprovados() {
    printf("Alunos aprovados:\n");
    for (int i = 0; i < 20; i++) {
        if (alunos[i].media >= 7.0) {
            printf("%s (Media: %.2f)\n", alunos[i].nome, alunos[i].media);
        }
    }
}

void listar_reprovados() {
    printf("Alunos reprovados:\n");
    for (int i = 0; i < 20; i++) {
        if (alunos[i].media < 7.0) {
            printf("%s (Media: %.2f)\n", alunos[i].nome, alunos[i].media);
        }
    }
}

int main() {
    int op;
    cadastrar();
    do {
        printf("\n1-Classificar\n2-Corrigir\n3-Pesquisar\n4-Listar Aprovados\n5-Listar Reprovados\n0-Sair\n");
        scanf("%d", &op);
        if (op == 1) cadastrar();
        if (op == 2) corrigir();
        if (op == 3) pesquisar();
        if (op == 4) listar_aprovados();
        if (op == 5) listar_reprovados();
    } while (op != 0);
    return 0;
}

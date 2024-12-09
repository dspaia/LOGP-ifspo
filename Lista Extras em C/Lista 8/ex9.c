#include <stdio.h>

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um valor para N: ");
    scanf("%d", &n);

    int resultado = somatorio(n);
    printf("Somatorio dos %d primeiros numeros inteiros: %d\n", n, resultado);

    return 0;
}

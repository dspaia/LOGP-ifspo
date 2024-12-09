#include <stdio.h>

float potencia(float n, int p) {
    float res = 1;
    for (int i = 0; i < p; i++) {
        res *= n;
    }
    return res;
}

int main() {
    float n;
    int p;

    printf("Numero: ");
    scanf("%f", &n);
    printf("Potencia: ");
    scanf("%d", &p);

    printf("Resultado: %.2f\n", potencia(n, p));

    return 0;
}

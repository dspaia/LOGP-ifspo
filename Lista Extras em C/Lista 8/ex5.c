#include <stdio.h>

float prestacao(float v, float t, float tx) {
    return v + (v * (tx / 100) * t);
}

int main() {
    float v, t, tx;

    printf("Valor: ");
    scanf("%f", &v);
    printf("Tempo: ");
    scanf("%f", &t);
    printf("Taxa: ");
    scanf("%f", &tx);

    printf("Prestacao: %.2f\n", prestacao(v, t, tx));

    return 0;
}

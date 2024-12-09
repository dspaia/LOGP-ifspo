#include <stdio.h>

void fibonacci(int n) {
    int a = 1, b = 1, temp;
    printf("%d\n%d\n", a, b);
    for (int i = 3; i <= n; i++) {
        temp = a + b;
        printf("%d\n", temp);
        a = b;
        b = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

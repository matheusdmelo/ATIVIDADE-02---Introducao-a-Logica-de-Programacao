#include <stdio.h>

int main() {
    int N, Fatorial = 1;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &N);

    if (N != 0) {
        for (int i = 1; i <= N; i++) {
            Fatorial *= i;
        }
        printf("O fatorial de %d eh:\n%d\n", N, Fatorial);
    } else {
        printf("O fatorial de %d eh:\n%d\n", N, Fatorial);
    }

    return 0;
}
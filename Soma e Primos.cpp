#include <iostream>
#include <cmath>

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

// Função para calcular as somas e a quantidade de primos
void calcularSomasEPrimos(int n1, int n2, int &somaPares, int &somaImpares, int &quantidadePrimos) {
    somaPares = 0;
    somaImpares = 0;
    quantidadePrimos = 0;

    for (int numero = n1; numero <= n2; numero++) {
        if (numero % 2 == 0) {
            somaPares += numero;
        } else {
            somaImpares += numero;
        }

        if (ehPrimo(numero)) {
            quantidadePrimos++;
        }
    }
}

int main() {
    int n1, n2;
    int somaPares, somaImpares, quantidadePrimos;

    // Entrada do usuário
    printf("\nInforme o numero inicial (n1): ");
    scanf("%d", &n1);
    printf("\nInforme o numero final (n2): ");
    scanf("%d", &n2);

    // Processamento
    calcularSomasEPrimos(n1, n2, somaPares, somaImpares, quantidadePrimos);

    // Saída
    printf("\nSoma dos numeros pares: ");
    printf("%d" , somaPares);
    printf("\nSoma dos numeros impares: ");
    printf("%d" , somaImpares);
    printf("\nQuantidade de numeros primos: ");
    printf("%d" , quantidadePrimos);

    return 0;
    
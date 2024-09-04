#include <iostream>

void realizarDivisao() {
    
        // Declarar as variaveis e ler os valores e conferir se o valor2 não é 0
    while (true) {
        
        float valor1, valor2;

        printf("\nDigite o primeiro valor: ");
        scanf("%f" , &valor1);

       while (true) {
        printf("\nDigite o segundo valor (não pode ser zero): ");
        scanf("%f" , &valor2);
            if (valor2 != 0) {
                break;
            } else {
                printf("\nO segundo valor não pode ser zero. Por favor, insira outro valor: ");
                scanf("%f" , &valor2);
                if (valor2 != 0) {
                    break;
                }
        }
    }

        // Realizar a divisão
        float resultado = valor1 / valor2;
        printf("\nResultado da divisao: ");
        printf("%f" , resultado);

        // Perguntar ao usuário se deseja continuar
        char continuar;
        printf("\nDeseja continuar o programa? (s/n): ");
        scanf("%s", &continuar);
        if (continuar != 's' && continuar != 'S') {
            break;
        }
    }
}

int main() {
    realizarDivisao();
    return 0;
}

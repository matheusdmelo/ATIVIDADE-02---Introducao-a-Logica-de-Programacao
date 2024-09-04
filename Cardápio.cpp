#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcao_prato, opcao_sobremesa, opcao_bebida;
    char novo_cliente;
    double preco_total;
    int calorias_totais;

    do {
        preco_total = 0;
        calorias_totais = 0;

        // Exibindo o menu de pratos
        cout << "Pratos:\n";
        cout << "1. Vegetariano (180 Kcal) - R$ 8,50\n";
        cout << "2. Peixe (230 Kcal) - R$ 12,30\n";
        cout << "3. Frango (250 Kcal) - R$ 7,50\n";
        cout << "4. Carne (350 Kcal) - R$ 9,80\n";

        // Exibindo o menu de sobremesas
        cout << "Sobremesas:\n";
        cout << "1. Abacaxi (75 Kcal) - R$ 1,50\n";
        cout << "2. Sorvete diet (110 Kcal) - R$ 3,50\n";
        cout << "3. Mousse diet (170 Kcal) - R$ 3,50\n";
        cout << "4. Mousse chocolate (200 Kcal) - R$ 4,00\n";
     
        // Exibindo o menu de bebidas
        cout << "Bebidas\n";
        cout << "1. Cha (20 Kcal) - R$ 1,00\n";
        cout << "2. Suco de laranja (70 Kcal) - R$ 2,50\n";
        cout << "3. Suco de melao (100 Kcal) - R$ 3,00\n";
        cout << "4. Refrigerante diet (65 Kcal) - R$ 2,00\n";
        cout << "Digite as opções de prato, sobremesa e bebida, respectivamente: ";
        
        cin >> opcao_prato;
        cin >> opcao_sobremesa;
        cin >> opcao_bebida;
        
        switch (opcao_prato) {
        case 1:
            preco_total += 8.50;
            calorias_totais += 180;
            break;
        case 2:
            preco_total += 12.30;
            calorias_totais += 230;
            break;
        case 3:
            preco_total += 7.50;
            calorias_totais += 250;
            break;
        case 4:
            preco_total += 9.80;
            calorias_totais += 350;
            break;
        default:
            cout << "Opcao invalida!" << endl;
            continue;
        }

        switch (opcao_sobremesa) {
        case 1:
            preco_total += 1.50;
            calorias_totais += 75;
            break;
        case 2:
            preco_total += 3.50;
            calorias_totais += 110;
            break;
        case 3:
            preco_total += 3.50;
            calorias_totais += 170;
            break;
        case 4:
            preco_total += 4.00;
            calorias_totais += 200;
            break;
        default:
            cout << "Opcao invalida!" << endl;
            continue;
        }

        

        switch (opcao_bebida) {
        case 1:
            preco_total += 1.00;
            calorias_totais += 20;
            break;
        case 2:
            preco_total += 2.50;
            calorias_totais += 70;
            break;
        case 3:
            preco_total += 3.00;
            calorias_totais += 100;
            break;
        case 4:
            preco_total += 2.00;
            calorias_totais += 65;
            break;
        default:
            cout << "Opcao invalida!" << endl;
            continue;
        }

        // Exibindo o total da refeição
        cout << "\nPreco total: R$ " << preco_total << endl;
        cout << "Calorias totais: " << calorias_totais << " Kcal\n";

        // Perguntando se há um novo cliente
        cout << "Deseja realizar o pedido de um novo cliente? (s/n): ";
        cin >> novo_cliente;

    } while (novo_cliente == 's' || novo_cliente == 'S');

    return 0;
}
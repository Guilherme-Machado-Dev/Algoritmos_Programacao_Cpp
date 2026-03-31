#include <iostream>   // Biblioteca para entrada e saída
using namespace std;  // Facilita o uso de cout e cin sem precisar de std::

int main() {
    float num1, num2, num3;  // Variáveis para armazenar os três valores

    // Solicita ao usuário que digite os três números
    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite o terceiro numero: ";
    cin >> num3;

    // Variável para armazenar o maior número
    float maior = num1;  

    // Verifica se o segundo número é maior que o atual "maior"
    if (num2 > maior) {
        maior = num2;
    }

    // Verifica se o terceiro número é maior que o atual "maior"
    if (num3 > maior) {
        maior = num3;
    }

    // Exibe o resultado
    cout << "O maior numero entre os tres valores e: " << maior;

    return 0;  // Finaliza o programa
}
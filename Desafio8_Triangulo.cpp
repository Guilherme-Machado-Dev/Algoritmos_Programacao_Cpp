#include <iostream>
using namespace std;

int main() {
    float a, b, c;  // Variáveis para armazenar os três segmentos

    // Solicita ao usuário os comprimentos dos segmentos
    cout << "Digite o comprimento do primeiro segmento: ";
    cin >> a;

    cout << "Digite o comprimento do segundo segmento: ";
    cin >> b;

    cout << "Digite o comprimento do terceiro segmento: ";
    cin >> c;

    // Verificação da desigualdade triangular
    if (a < b + c && b < a + c && c < a + b) {
        cout << "Os segmentos podem formar um triangulo valido!";
    } else {
        cout << "Os segmentos NAO podem formar um triangulo.";
    }

    return 0;  // Finaliza o programa
}
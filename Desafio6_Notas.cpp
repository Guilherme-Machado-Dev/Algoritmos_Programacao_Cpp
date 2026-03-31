#include <iostream>   // Biblioteca para entrada e saída
using namespace std;  // Facilita o uso de cout e cin sem precisar de std::

int main() {
    float nota;  // Variável para armazenar a nota da Maria

    // Solicita ao usuário que digite a nota
    cout << "Digite a nota de Maria: ";
    cin >> nota;  // Lê a nota digitada

    // Estrutura condicional para verificar o conceito correspondente
    if (nota >= 9) {
        cout << "Conceito: A";  // Nota maior ou igual a 9
    } else if (nota >= 7) {
        cout << "Conceito: B";  // Nota entre 7 e 8.9
    } else if (nota >= 5) {
        cout << "Conceito: C";  // Nota entre 5 e 6.9
    } else if (nota >= 3) {
        cout << "Conceito: D";  // Nota entre 3 e 4.9
    } else {
        cout << "Conceito: E";  // Nota menor que 3
    }

    return 0;  // Finaliza o programa
}
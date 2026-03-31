#include <iostream>   // Biblioteca padrão para entrada e saída (cout, cin)
using namespace std;  // Permite usar objetos da biblioteca padrão sem precisar escrever "std::"

// Função principal do programa
int main() {
    int idade;  // Declaração da variável que armazenará a idade do usuário

    // Solicita ao usuário que digite sua idade
    cout << "Digite sua idade: ";
    cin >> idade;  // Lê a idade digitada e armazena na variável 'idade'

    // Estrutura condicional para verificar se a idade é suficiente para votar
    if (idade < 18) {  
        // Caso a idade seja menor que 18
        cout << "Idade insuficiente para votar. ";  
        cout << "Faltam " << 18 - idade << " ano(s) para atingir a idade minima.";
    } else {  
        // Caso a idade seja maior ou igual a 18
        cout << "Idade suficiente para votar. ";  
        cout << "Parabens, voce ja pode se registrar como eleitor!";
    }

    return 0;  // Indica que o programa terminou com sucesso
}
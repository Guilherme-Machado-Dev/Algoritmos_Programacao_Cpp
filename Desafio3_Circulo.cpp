#include <iostream>  // Biblioteca para entrada e saída (cout, cin)
#include <cmath>     // Biblioteca para funções matemáticas (pow, M_PI)

using namespace std; // Permite usar cout e cin sem precisar escrever std::

int main() {
    double raio;   // Declara uma variável do tipo double para armazenar o raio
    
    cout << "Digite o raio do circulo: ";  // Exibe mensagem pedindo o raio
    cin >> raio;   // Lê o valor digitado pelo usuário e guarda em 'raio'

    // Calcula a área do círculo usando a fórmula: área = π * r^2.
    // Exemplo: use M_PI para representar π.
    double area = M_PI * pow(raio, 2); 

    // Exibe o resultado na tela
    cout << "A area do circulo e: " << area << endl;

    return 0;  // Indica que o programa terminou com sucesso
}
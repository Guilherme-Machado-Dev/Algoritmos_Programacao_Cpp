#include <iostream> // biblioteca para entrada e saída (cout, cin)
#include <iomanip> // Para formatar casas decimais

using namespace std; // Permite usar cout e cin sem precisar escrever std::

int main() {
    // Declarar variável para a temperatura em Celsius
    double celsius;

    // Entrada de dados
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    // Converter para Fahrenheit com formula: °F = °C * 9/5 + 32
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Mostrar resultado com 2 numeros decimais
    cout << fixed << setprecision(2);
    cout << "A temperatura em Fahrenheit e: " << fahrenheit << endl;

    return 0;  // Indica que o programa terminou com sucesso
}
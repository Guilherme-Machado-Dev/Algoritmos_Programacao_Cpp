#include <iostream> // Biblioteca para entrada e saída (cout, cin)
#include <iomanip> // Para formatar casas decimais

using namespace std; // Permite usar cout e cin sem precisar escrever std::

int main() {
    // Declarar variáveis de Pedro
    double matematica, portugues, ciencias;

    // Entrada de dados
    cout << "Digite a nota de matematica: ";
    cin >> matematica;

    cout << "Digite a nota de portugues: ";
    cin >> portugues;

    cout << "Digite a nota de ciencias: ";
    cin >> ciencias;

    // Calcular média com formula: Total / Quantidade de Elementos(3)
    double media = (matematica + portugues + ciencias) / 3.0;

    // Mostrar resultado com 2 numeros decimais 
    cout << fixed << setprecision(2);
    cout << "A media final de Pedro e: " << media << endl;

    return 0;  // Indica que o programa terminou com sucesso
}
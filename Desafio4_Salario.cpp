#include <iostream>   // Biblioteca padrão para entrada e saída
#include <vector>     // Biblioteca para usar vetores (listas dinâmicas)

using namespace std;

int main() {
    int dias;                  // Variável para armazenar o número de dias trabalhados
    double taxaHoraria;         // Variável para armazenar o valor da hora trabalhada
    double salarioBruto = 0;    // Variável acumuladora para o salário total

    // Solicita ao usuário a taxa horária
    cout << "Digite a taxa horaria (R$/hora): ";
    cin >> taxaHoraria;

    // Solicita ao usuário quantos dias foram trabalhados no mês
    cout << "Digite o numero de dias trabalhados no mes: ";
    cin >> dias;

    // Cria um vetor para armazenar as horas de cada dia
    vector<double> horas(dias);

    // Loop para registrar as horas trabalhadas em cada dia
    for (int i = 0; i < dias; i++) {
        cout << "Digite as horas trabalhadas no dia " << i + 1 << ": ";
        cin >> horas[i];  // Lê as horas do dia i
        salarioBruto += horas[i] * taxaHoraria;  // Calcula e acumula o valor do dia
    }

    // Exibe o resultado na tela
    cout << "\nSalario bruto no final do mes: R$ " << salarioBruto << endl;

    return 0; // Indica que o programa terminou com sucesso
}
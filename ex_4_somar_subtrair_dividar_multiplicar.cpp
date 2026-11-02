#include <iostream>

using namespace std;

int main() {
    string operacao;
    float n1, n2;
    float calculo;

    cout << "Operacoes possiveis:\n";
    cout << "somar\n";
    cout << "subtrair\n",
    cout << "multiplicar\n";
    cout << "dividir\n";

    cout << "Diga qual operacao quer efetuar: ",
    cin >> operacao;

    //cout << "Escolheste: " << operacao;

    cout << "Diz o 1.num";
    cin >> n1;
    cout << "Diz o 2.num";
    cin >> n2;

    if (operacao == "somar") {
        cout << "soma = " << (n1 + n2);
    }
    if (operacao == "subtrair") {
        cout << "subtracao = " << (n1 - n2);
    }
    if (operacao == "multiplicar") {
        cout << "multiplicacao = " << (n1 * n2);
    }
    if (operacao == "dividir") {
        cout << "divisao = " << (n1 / n2);
    }

}

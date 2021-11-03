#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void atividade1() {
    int val = 0;
    cin >> val;
    cout << "O valor " << val << ", em hexadecimal é igual a: " << hex << val << endl;
}

void atividade2() {
    int val;

    stringstream finalOutput;
    stringstream hexVal;
    stringstream hexStr;
    stringstream octVal;

    do {
        cout << "Informe um valor inteiro, ou -1 para sair: ";
        cin >> val;
        if (val > -1) {
            hexVal << hex << val << std::showbase;

            hexStr << hexVal.str().replace(0, 2, "HEXA");

            octVal << oct << val << std::showbase;

            finalOutput << "Valor: " << to_string(val) <<
                        "\n Valor em Hexadecimal: " << hexStr.str() <<
                        "\n Valor em octal: " << octVal.str() << "\n\n";

            hexVal.str("");
            hexStr.str("");
            octVal.str("");
        }
    } while (val != -1);

    cout << finalOutput.str();
}

int main() {
    int opt;
    do {
        cout << "Informe uma opção:\n";
        cout << "1 - Atividade 1.\n";
        cout << "2 - Atividade 2.\n";
        cout << "0 - Sair.\n";
        cin >> opt;
        switch (opt) {
            case 0:
                break;
            case 1:
                atividade1();
                break;
            case 2:
                atividade2();
                break;
            case 3:
                break;
            default:
                cout << "Opção inválida";
                break;
        }
    } while (opt > 0);
    return 0;
}

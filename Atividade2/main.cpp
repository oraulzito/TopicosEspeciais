#include <iostream>

int main() {
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
    return 0;
}

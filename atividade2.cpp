//
// Created by raul_ on 10/15/2021.
//
// Criar um programa em C++ que:
//
//- Receba N números inteiro do usuário, até o usuário digitar -1
//- Escreva os valores convertidos em hexadecimal e octal para uma string
//- Substitua todos os "0x" por "HEXA"
//- Imprima a string na tela

#include <iostream>
#include <sstream>

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


//
// Created by raul_ on 10/31/2021.
//

#ifndef UNTITLED_FRACAO_H
#define UNTITLED_FRACAO_H


#include <iostream>

class Fracao {
private:
    int numerador;
    int denominador;
public:
    Fracao(int numerador, int denominador = 1) {
        this->numerador = numerador;
        this->denominador = denominador;
    }

    int getNumerador() const {
        return numerador;
    }

    void setNumerador(int numerador) {
        Fracao::numerador = numerador;
    }

    int getDenominador() const {
        return denominador;
    }

    void setDenominador(int denominador) {
        Fracao::denominador = denominador;
    }

    void getFracao() {
        if (this->getDenominador() > 1)
            std::cout << this->getNumerador() << "/" << this->getDenominador();
        else
            std::cout << this->getNumerador();
    }
};


#endif //UNTITLED_FRACAO_H

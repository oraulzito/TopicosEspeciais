//
// Created by raul_ on 12/1/2021.
//

#include "FracaoAtividade7.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


FracaoAtividade7::FracaoAtividade7(int numerador, int denominador) {
    this->numerador = numerador;
    this->denominador = denominador;
}

int FracaoAtividade7::getNumerador() const {
    return numerador;
}

void FracaoAtividade7::setNumerador(int numerador) {
    FracaoAtividade7::numerador = numerador;
}

int FracaoAtividade7::getDenominador() const {
    return denominador;
}

void FracaoAtividade7::setDenominador(int denominador) {
    FracaoAtividade7::denominador = denominador;
}

string FracaoAtividade7::getFracao() {
    if (this->getNumerador() > 1 and this->getDenominador() > 1)
        return to_string(this->getNumerador()) + "/" + to_string(this->getDenominador());
    else
        return to_string(this->getNumerador());
}

int FracaoAtividade7::gcd(int x, int y) {
    int r;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int FracaoAtividade7::lcm(int x, int y) {
    return (x / gcd(x, y)) * y;
}

ostream &operator<<(ostream &output, FracaoAtividade7 &fracao) {
    output << to_string(fracao.getNumerador()) + "/" + to_string(fracao.getDenominador());
    return output;
}

istream &operator>>(istream &input, FracaoAtividade7 &fracao) {
    cout << "Numerador: " << endl;
    input >> fracao.numerador;
    cout << "Denominador: " << endl;
    input >> fracao.denominador;
    return input;
}

FracaoAtividade7 FracaoAtividade7::operator=(FracaoAtividade7 &fracao) {
    fracao.numerador = this->numerador;
    fracao.denominador = this->denominador;

    return fracao;
}

string FracaoAtividade7::operator==(FracaoAtividade7 &fracao) {
    if ((this->getNumerador() / this->getDenominador()) == (fracao.numerador / fracao.denominador)) {
        return "The fractions are equal";
    } else {
        return "The fractions are not not equal";
    }
}

string FracaoAtividade7::operator!=(FracaoAtividade7 &fracao) {
    if ((this->getNumerador() / this->getDenominador()) != (fracao.numerador / fracao.denominador)) {
        return this->getFracao() + " is different than " +
               to_string(fracao.numerador) + "/" + to_string(fracao.denominador);
    } else {
        return this->getFracao() + " is not different than " +
               to_string(fracao.numerador) + "/" + to_string(fracao.denominador);
    }
}

string FracaoAtividade7::operator<(FracaoAtividade7 &fracao) {
    if ((this->getNumerador() / this->getDenominador()) < (fracao.numerador / fracao.denominador)) {
        return this->getFracao() + " is lower than " +
               to_string(fracao.numerador) + "/" + to_string(fracao.denominador);
    } else {
        return this->getFracao() + " is not lower than " +
               to_string(fracao.numerador) + "/" + to_string(fracao.denominador);
    }
}

string FracaoAtividade7::operator>(FracaoAtividade7 &fracao) {
    if ((this->getNumerador() / this->getDenominador()) > (fracao.numerador / fracao.denominador)) {
        return this->getFracao() + " is greater than " +
               to_string(fracao.numerador) + "/" + to_string(fracao.denominador);
    } else {
        return this->getFracao() + " is not greater than " +
               to_string(fracao.numerador) + "/" + to_string(fracao.denominador);
    }
}

string FracaoAtividade7::operator<=(FracaoAtividade7 &fracao) {
    if ((this->getNumerador() / this->getDenominador()) <= (fracao.numerador / fracao.denominador)) {
        return this->getFracao() + " is lower or equal to " +
               to_string(fracao.numerador) + "/" + to_string(fracao.denominador);
    } else {
        return this->getFracao() + " is not lower or equal to " +
               to_string(fracao.numerador) + "/" + to_string(fracao.denominador);
    }
}

string FracaoAtividade7::operator>=(FracaoAtividade7 &fracao) {
    if ((this->getNumerador() / this->getDenominador()) <= (fracao.numerador / fracao.denominador)) {
        return this->getFracao() + " is greater o equal to " +
               to_string(fracao.numerador) + "/" + to_string(fracao.denominador);
    } else {
        return this->getFracao() + " is not greater or equal to " +
               to_string(fracao.numerador) + "/" + to_string(fracao.denominador);
    }
}

FracaoAtividade7 FracaoAtividade7::operator+=(FracaoAtividade7 &fracao) {
    int rn = 0, rd = 0, r1 = 0, r2 = 0, r3 = 0, r4 = 0;

    if (this->getDenominador() != fracao.denominador) {
        r1 = this->getNumerador() * fracao.denominador;
        r2 = this->getDenominador() * fracao.denominador;

        r3 = fracao.numerador * this->getDenominador();
        r4 = fracao.denominador * this->getDenominador();

        fracao.numerador = r1 + r3;
        fracao.denominador = r2 + r4;
    } else {
        fracao.numerador += this->getNumerador();
        fracao.denominador = this->getDenominador();
    }

    fracao.simplifica();

    return fracao;
}

FracaoAtividade7 FracaoAtividade7::operator-=(FracaoAtividade7 &fracao) {
    int rn = 0, rd = 0, r1 = 0, r2 = 0, r3 = 0, r4 = 0;

    if (this->getDenominador() != fracao.denominador) {
        r1 = this->getNumerador() * fracao.denominador;
        r2 = this->getDenominador() * fracao.denominador;

        r3 = fracao.numerador * this->getDenominador();
        r4 = fracao.denominador * this->getDenominador();

        fracao.numerador = r1 - r3;
        fracao.denominador = r2 - r4;
    } else {
        fracao.numerador -= this->getNumerador();
        fracao.denominador = this->getDenominador();
    }

    fracao.simplifica();

    return fracao;
}

FracaoAtividade7 FracaoAtividade7::operator/=(FracaoAtividade7 &fracao) {
    fracao.numerador = this->getNumerador() * fracao.denominador;
    fracao.denominador = this->getDenominador() * fracao.numerador;
    return fracao;
}

FracaoAtividade7 FracaoAtividade7::operator*=(FracaoAtividade7 &fracao) {
    fracao.numerador *= this->getNumerador();
    fracao.denominador *= this->getDenominador();
    return fracao;
}


void FracaoAtividade7::simplifica() {
    int d = gcd(this->getNumerador(), this->getDenominador());

    this->setNumerador(this->getNumerador() / d);
    this->setDenominador(this->getDenominador() / d);
}


//
// Created by raul_ on 12/1/2021.
//

#include <iostream>
#include <string>

using namespace std;

class FracaoAtividade7 {
public:
    FracaoAtividade7 operator=(FracaoAtividade7 &fracao);

    string operator==(FracaoAtividade7 &fracao);

    string operator!=(FracaoAtividade7 &fracao);

    friend ostream &operator<<(ostream &output, FracaoAtividade7 &fracao);

    friend istream &operator>>(istream &input, FracaoAtividade7 &fracao);

    string operator<(FracaoAtividade7 &fracao);

    string operator>(FracaoAtividade7 &fracao);

    string operator>=(FracaoAtividade7 &fracao);

    string operator<=(FracaoAtividade7 &fracao);

    FracaoAtividade7 operator+=(FracaoAtividade7 &fracao);

    FracaoAtividade7 operator-=(FracaoAtividade7 &fracao);

    FracaoAtividade7 operator/=(FracaoAtividade7 &fracao);

    FracaoAtividade7 operator*=(FracaoAtividade7 &fracao);

    FracaoAtividade7(int numerador, int denominador = 1);

    int getNumerador() const;

    void setNumerador(int numerador);

    int getDenominador() const;

    void setDenominador(int denominador);

    string getFracao();

    void simplifica();

private:
    int numerador;
    int denominador;

    int gcd(int x, int y);

    int lcm(int x, int y);
};



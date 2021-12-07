#include <iostream>
#include <string>

#include "FracaoAtividade7.h"

using namespace std;

int main() {
    FracaoAtividade7 fracao1(8, 9);
    FracaoAtividade7 fracao2(9, 10);
    FracaoAtividade7 fracao3(5);
    FracaoAtividade7 fracao4(10, 8);

    cout << fracao1.getFracao() << endl;
    cout << fracao2.getFracao() << endl;
    cout << fracao3.getFracao() << endl;
    cout << fracao4.getFracao() << endl;

    cout << "\nSimplificação" << endl;
    fracao1.simplifica();
    fracao2.simplifica();
    fracao3.simplifica();
    fracao4.simplifica();

    cout << fracao1.getFracao() << endl;
    cout << fracao2.getFracao() << endl;
    cout << fracao3.getFracao() << endl;
    cout << fracao4.getFracao() << endl;

    cout << "\n>>" << endl;
    cin >> fracao1;

    cout << "\n<<" << endl;
    cout << fracao1;

    cout << "\n\n=" << endl;
    FracaoAtividade7 operatorVar1(0, 0);
    fracao1.operator=(operatorVar1);
    cout << operatorVar1 << endl;

    cout << "\n==" << endl;
    FracaoAtividade7 operatorVar2(3, 6);

    cout << fracao2.operator==(operatorVar2) << endl;

    cout << "\n!=" << endl;
    FracaoAtividade7 operatorVar3(1, 4);

    cout << fracao3.operator!=(operatorVar3) << endl;

    cout << "\n<" << endl;
    FracaoAtividade7 operatorVar4(9, 10);
    cout << fracao4.operator<(operatorVar4) << endl;

    cout << "\n>" << endl;
    FracaoAtividade7 operatorVar5(8, 6);
    cout << fracao1.operator>(operatorVar5) << endl;

    cout << "\n<=" << endl;
    FracaoAtividade7 operatorVar6(8, 6);
    cout << fracao2.operator<=(operatorVar6) << endl;

    cout << "\n>=" << endl;
    FracaoAtividade7 operatorVar7(2, 5);
    cout << fracao3.operator>=(operatorVar7) << endl;

    cout << "\n+=" << endl;
    FracaoAtividade7 operatorVar8(1, 3);
    cout << fracao4.getFracao() + " + " + operatorVar8.getFracao() + " = ";
    fracao4.operator+=(operatorVar8);
    cout << operatorVar8 << endl;

    cout << "\n-=" << endl;
    FracaoAtividade7 operatorVar9(5, 4);
    cout << fracao1.getFracao() + " - " + operatorVar9.getFracao() + " = ";
    fracao1.operator-=(operatorVar9);
    cout << operatorVar9 << endl;

    cout << "\n*=" << endl;
    FracaoAtividade7 operatorVar10(1, 2);
    cout << fracao2.getFracao() + " * " + operatorVar10.getFracao() + " = ";
    fracao2.operator*=(operatorVar10);
    cout << operatorVar10 << endl;

    cout << "\n/=" << endl;
    FracaoAtividade7 operatorVar11(6, 3);
    cout << fracao3.getFracao() + " / " + operatorVar11.getFracao() + " = ";
    fracao3.operator/=(operatorVar11);
    cout << operatorVar11 << endl;

    return 0;
}

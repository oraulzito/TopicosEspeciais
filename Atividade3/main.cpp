#include <iostream>

int main() {
    Fracao fracao1(2, 3);
    Fracao fracao2(0, 4);
    Fracao fracao3(5);
    Fracao fracao4(3, 1);

    fracao1.getFracao();
    std::cout << "\n";
    fracao2.getFracao();
    std::cout << "\n";
    fracao3.getFracao();
    std::cout << "\n";
    fracao4.getFracao();

    return 0;
}

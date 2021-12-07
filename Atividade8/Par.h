#include <iostream>

using namespace std;

template<class T, class N>
class Par {
private:
    T primeiroTipo;
    N segundoTipo;
public:
    Par(T primeiro, N segundo) {
        primeiroTipo = primeiro;
        segundoTipo = segundo;
    }

    virtual ~Par() {};

    void primeiro();

    void segundo();
};

template<class T, class N>
void Par<T, N>::primeiro() {
    cout << "Primeiro" << endl;
    cout << primeiroTipo << endl;
}

template<class T, class N>
void Par<T, N>::segundo() {
    cout << "Segundo" << endl;
    cout << segundoTipo << endl;
}

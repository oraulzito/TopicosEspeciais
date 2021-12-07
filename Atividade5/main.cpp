//
// Created by raul_ on 11/2/2021.
//

#include "ObjInt.h"
#include "ObjDouble.h"

int main() {
    ObjDouble *objDouble = new ObjDouble("Double", 1.6);
    ObjInt *objInt = new ObjInt("Int", 6);

    std::cout << objDouble->showName() << std::endl;
    std::cout << objInt->showName() << std::endl;

    ObjBase *objBase[3];

    ObjDouble objDouble1("Double 1", 1.6);
    ObjInt objInt1("Int 1", 6);
    ObjBase objBase1("ObjBase 1");

    objBase[0] = &objBase1;
    objBase[1] = &objInt1;
    objBase[2] = &objDouble1;

    for (int i = 0; i < 3; i++) {
        objBase[i]->print();
    }

    for (int i = 0; i < 3; i++) {
        std::cout << typeid(*objBase[i]).name() << std::endl;
    }

    delete [] objBase;

    return 0;
}


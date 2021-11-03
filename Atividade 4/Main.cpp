//
// Created by raul_ on 11/2/2021.
//

#include "ObjBase.h"
#include "ObjInt.h"
#include "ObjDouble.h"

int main(){
    ObjDouble objDouble = new ObjDouble(1.6);
    ObjInt objInt = new ObjInt(6);

    objDouble.showName();
    objInt.showName();

    return 0;
}
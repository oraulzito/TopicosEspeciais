//
// Created by raul_ on 11/2/2021.
//

#ifndef UNTITLED_OBJDOUBLE_H
#define UNTITLED_OBJDOUBLE_H

#include "ObjBase.h"

class ObjDouble : public ObjBase {
private:
    double attrObjDouble;
public:
    ObjDouble::ObjDouble(double attrObjDouble, const string objName)
            : attrObjDouble(attrObjDouble), objName(objName) {}

    showName();
};


#endif //UNTITLED_OBJDOUBLE_H

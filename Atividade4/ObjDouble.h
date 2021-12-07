//
// Created by raul_ on 11/2/2021.
//

#ifndef UNTITLED_OBJDOUBLE_H
#define UNTITLED_OBJDOUBLE_H
#include <string>
#include "ObjBase.h"

class ObjDouble : public ObjBase {
private:
    double attrObjDouble;
public:
    ObjDouble(const std::string &objName, double attrObjDouble) : ObjBase(objName) {
        this->attrObjDouble = attrObjDouble;
    }

    double getAttrObjDouble() const {
        return attrObjDouble;
    }

    void setAttrObjDouble(double attrObjDouble) {
        ObjDouble::attrObjDouble = attrObjDouble;
    }
    const std::string showName(void) { return objName; }



};


#endif //UNTITLED_OBJDOUBLE_H

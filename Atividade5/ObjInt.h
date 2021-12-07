//
// Created by raul_ on 11/2/2021.
//

#ifndef UNTITLED_OBJINT_H
#define UNTITLED_OBJINT_H

#include <string>
#include "ObjBase.h"

class ObjInt : public ObjBase {
private:
    int attrObjInt;
public:
    ObjInt(const std::string &objName, int attrObjInt) : ObjBase(objName) {
        this->attrObjInt = attrObjInt;
    }

    int getAttrObjInt() const {
        return attrObjInt;
    }

    void setAttrObjInt(int attrObjInt) {
        ObjInt::attrObjInt = attrObjInt;
    }

    virtual void print() const {
        std::cout << "Class: " << objName << "\tValue: " << attrObjInt << std::endl;
    }

    virtual ~ObjInt(){}
};


#endif //UNTITLED_OBJINT_H

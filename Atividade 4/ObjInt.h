//
// Created by raul_ on 11/2/2021.
//

#ifndef UNTITLED_OBJINT_H
#define UNTITLED_OBJINT_H

#include "ObjBase.h"

class ObjInt : public ObjBase {
private:
    int attrObjInt;
public:
    ObjInt::ObjBase(double attrObjInt, const string objName) : attrObjInt(attrObjInt), objName(objName) {}

    showName();

};


#endif //UNTITLED_OBJINT_H

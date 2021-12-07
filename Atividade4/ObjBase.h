//
// Created by raul_ on 11/2/2021.
//

#ifndef UNTITLED_OBJBASE_H
#define UNTITLED_OBJBASE_H

#include <string>
#include <iostream>

class ObjBase {
protected:
    const std::string objName;
public:
    ObjBase(const std::string &objName) : objName{objName}{}

    const std::string &getObjName() {
        return objName;
    }

    const std::string showName(void) { return this->objName; }
};

#endif //UNTITLED_OBJBASE_H

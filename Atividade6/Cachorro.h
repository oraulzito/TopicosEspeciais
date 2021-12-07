//
// Created by raul_ on 11/22/2021.
//

#ifndef TOPICOSESPECIAIS_CACHORRO_H
#define TOPICOSESPECIAIS_CACHORRO_H


class Cachorro : public Animal {
public:
    virtual void fala() {
        std::cout << "Au Au Au" << std::endl;
    }
};


#endif //TOPICOSESPECIAIS_CACHORRO_H

#include <iostream>
#include <stdlib.h>

#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"
#include "Vaca.h"

int main() {
    Animal *animal[10];

    for (int i = 0; i < 10; ++i) {
        int v = rand() % 3;
        if (v == 0) {
            Animal *cachorro = new Cachorro();
            animal[i] = cachorro;
        } else if (v == 1) {
            Animal *gato = new Gato();
            animal[i] = gato;
        } else if (v == 2) {
            Animal *vaca = new Vaca();
            animal[i] = vaca;
        }
    }


    for (int i = 0; i < 10; ++i) {
        animal[i]->fala();
    }

    return 0;
}

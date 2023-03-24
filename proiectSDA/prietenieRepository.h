//
// Created by Razvan on 31/05/2022.
//

#ifndef PROIECTSDA_PRIETENIEREPOSITORY_H
#define PROIECTSDA_PRIETENIEREPOSITORY_H
#include "prietenie.h"
#include "Array.h"
#include <iostream>
using namespace std;

class PrietenieRepository{
private:
    Array<Prietenie> element;
public:
    PrietenieRepository() = default;

    PrietenieRepository(PrietenieRepository &rp){
        this->element = rp.element;
    }

    virtual ~PrietenieRepository() {

    }

    void adaugaPrietenie(Prietenie &p){
        element.AddItem(p);
    }

    Prietenie* getAll(){
        return element.getAll();
    }

    void stergerePrietenie(Prietenie &p){
        element.remove(p);
    }

    int size(){
        return element.size();
    }


};
#endif //PROIECTSDA_PRIETENIEREPOSITORY_H

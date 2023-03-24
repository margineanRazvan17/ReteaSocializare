//
// Created by Razvan on 31/05/2022.
//

#ifndef PROIECTSDA_MESAJREPOSITORY_H
#define PROIECTSDA_MESAJREPOSITORY_H
#include "Mesaj.h"
#include "Array.h"

class MesajRepository {
private:
    Array<Mesaj> element;
public:
    MesajRepository() = default;

    MesajRepository(MesajRepository &rp){
        this->element = rp.element;
    }

    virtual ~MesajRepository() {

    }

    void adaugaMesaj(Mesaj &p){
        element.AddItem(p);
    }

    Mesaj* getAll(){
        return element.getAll();
    }

    void stergereMesaj(Mesaj &p){
        element.remove(p);
    }

    int size(){
        return element.size();
    }


};


#endif //PROIECTSDA_MESAJREPOSITORY_H

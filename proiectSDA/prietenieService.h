//
// Created by Razvan on 31/05/2022.
//

#ifndef PROIECTSDA_PRIETENIESERVICE_H
#define PROIECTSDA_PRIETENIESERVICE_H
#include <iostream>
#include "prietenieRepository.h"
using namespace std;
class PrietenieService{
private:
    PrietenieRepository repoPrietenie;
public:
    PrietenieService()=default;

    PrietenieService(PrietenieRepository &r){
        /// constructor de copiere
        this->repoPrietenie = r;
    }

    void adaugaPrietenieService(string un1, string un2){
        ///adaugare prietenie
        Prietenie p;
        p.setUsername1(un1);
        p.setUsername2(un2);
        repoPrietenie.adaugaPrietenie(p);
    }

    void stergerePrietenieService(string un1, string un2){
        ///stergere prietenie
        Prietenie p;
        p.setUsername1(un1);
        p.setUsername2(un2);
        repoPrietenie.stergerePrietenie(p);
    }

    Prietenie* getAll(){
        /// returnare lista prietenii
        return repoPrietenie.getAll();
    }

    int size(){
        /// returnare lungime lista prietenii
        return repoPrietenie.size();
    }
};
#endif //PROIECTSDA_PRIETENIESERVICE_H

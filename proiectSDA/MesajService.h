//
// Created by Razvan on 31/05/2022.
//

#ifndef PROIECTSDA_MESAJSERVICE_H
#define PROIECTSDA_MESAJSERVICE_H

#include "MesajRepository.h"
class MesajService {
private:
    MesajRepository repoMesaj;
public:
    MesajService()=default;

    MesajService(MesajRepository &r){
        this->repoMesaj = r;
    }

    void adaugaMesajService(std::string un1, std::string un2, std::string info){
        ///adaugare mesaj
        ///un1:sender
        ///un2:receiver
        ///info:text mesaj
        Mesaj m(un1, un2, info);
        repoMesaj.adaugaMesaj(m);
    }

    void stergereMesajService(std::string un1, std::string un2, std::string info){
        ///stergere mesaj
        Mesaj m(un1, un2, info);
        repoMesaj.stergereMesaj(m);
    }

    Mesaj* getAll(){
        ///returnare lista mesaje
        return repoMesaj.getAll();
    }

    int size(){
        ///returnare lungime lista mesaje
        return repoMesaj.size();
    }
};


#endif //PROIECTSDA_MESAJSERVICE_H

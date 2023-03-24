//
// Created by Razvan on 30/05/2022.
//

#ifndef PROIECTSDA_UTILIZATORSERVICE_H
#define PROIECTSDA_UTILIZATORSERVICE_H
#include <iostream>
#include "utilizatorRepository.h"

using namespace std;
class UtilizatorService{
private:
    RepoUser repoUser;
public:
    UtilizatorService(){
    }

    UtilizatorService(RepoUser &r){
        this->repoUser = r;
    }

    void addUtilizator(string n, string p){
        ///adaugare utilizator
        Utilizator u;
        u = Utilizator(n, p);
        this->repoUser.addUser(u);
    }

    Utilizator* getAll(){
        /// returnare lista utilizatori
        return repoUser.getAll();
    }

    int getSize(){
        /// returnare lungime lista utilizaatori
        return repoUser.size();
    }

    void removeUtilizator(string n){
        /// stergere utilizatori dupa username
        Utilizator u = repoUser.search(n);
        repoUser.removeUser(u);
    }

    bool verifyUser(string username, string pasword){
        /// return True daca exista utilizator in lista, false in caz contrar
        Utilizator *u = this->repoUser.getAll();

        for(int i=0;i<this->getSize();i++)
            if(username == u[i].getName() and pasword == u[i].getPassword())
                return true;
        return false;
    }
    void modify(string username, string password){
        /// modificare utilizatori
        Utilizator uv = repoUser.search(username);
        Utilizator un(username, password);
        repoUser.modify(uv, un);
    }



};


#endif //PROIECTSDA_UTILIZATORSERVICE_H

//
// Created by Razvan on 30/05/2022.
//

#ifndef PROIECTSDA_UTILIZATORREPOSITORY_H
#define PROIECTSDA_UTILIZATORREPOSITORY_H


#include <iostream>
#include "utilizator.h"
#include "Array.h"
class RepoUser{
private:
    Array<Utilizator> element;
public:
    RepoUser(){
    }
    RepoUser(RepoUser &r){
        this->element = r.element;
    }
    void addUser(Utilizator &u){
        this->element.AddItem(u);
    }
    void removeUser(Utilizator &u){
        this->element.remove(u);
    }
    int size(){
        return this->element.size();
    }
    Utilizator* getAll(){
        return this->element.getAll();
    }
    void modify(Utilizator &uv, Utilizator &un){
        Utilizator* user;
        user = this->element.getAll();
        for(int i = 0; i <element.size(); i++)
            if(user[i] == uv)
                user[i]=un;
    }
    Utilizator search(string username){
        Utilizator* user;
        user = this->element.getAll();
        for(int i = 0; i <element.size(); i++)
            if(user[i].getName() == username)
                return user[i];
    }

};
#endif //PROIECTSDA_UTILIZATORREPOSITORY_H
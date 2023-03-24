#ifndef PROIECTSDA_UTILIZATOR_H
#define PROIECTSDA_UTILIZATOR_H
#endif //PROIECTSDA_UTILIZATOR_H
#include <cstring>
#include <iostream>
using namespace std;

class Utilizator{
private:
    string name;
    string password;
public:
    Utilizator() = default;
    Utilizator(const Utilizator& u){
        this->name = u.name;
        this->password = u.password;
    }
    Utilizator(string n, string p){
        this->name = new char[n.length() + 1];
        this->name = n;

        this->password = new char[p.length() + 1];
        this->password = p;

    }
    ~Utilizator() = default;

    string getName(){
        return this->name;
    }

    string getPassword(){
        return this->password;
    }

    void setName(string n){
        this->name = new char[n.length() + 1];
        this->name = n;
    }

    void setPassword(string p){
        this->password = new char[p.length() + 1];
        this->password = p;
    }
    bool operator==(const Utilizator &u) {
        return ((this->name == name) and (this->password == u.password));
    }

    friend ostream &operator<<(ostream &output, Utilizator &u) {
        output << u.name << ' ' << u.password << endl;
        return output;
    }

    Utilizator& operator = (const Utilizator &u){
        if(this != &u){
            this->name = u.name;
            this->password = u.password;
        }
        return *this;
    }

};

//
// Created by Razvan on 31/05/2022.
//

#ifndef PROIECTSDA_PRIETENIE_H
#define PROIECTSDA_PRIETENIE_H
#include "cstring"
#include <iostream>
using namespace std;
class Prietenie{
private:
    string username1, username2;
public:
    Prietenie() = default;

    Prietenie(string u1, string u2){
        this->username1 = u1;
        this->username2 = u2;
    }

    const string &getUsername1() const {
        return username1;
    }

    void setUsername1(const string &username1) {
        Prietenie::username1 = username1;
    }

    const string &getUsername2() const {
        return username2;
    }

    void setUsername2(const string &username2) {
        Prietenie::username2 = username2;
    }

    virtual ~Prietenie() {

    }

    bool operator==(const Prietenie &rhs) const {
        return username1 == rhs.username1 &&
               username2 == rhs.username2;
    }

    bool operator!=(const Prietenie &rhs) const {
        return !(rhs == *this);
    }
//
//    friend ostream &operator<<(ostream &os, const Prietenie &prietenie) {
//        os << "username1: " << prietenie.username1 << " username2: " << prietenie.username2;
//        return os;
//    }

};

#endif //PROIECTSDA_PRIETENIE_H

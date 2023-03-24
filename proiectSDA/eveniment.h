////
//// Created by Razvan on 31/05/2022.
////
//
//#ifndef PROIECTSDA_EVENIMENT_H
//#define PROIECTSDA_EVENIMENT_H
//#include <iostream>
//using namespace std;
//
//class Eveniment{
//private:
//    char *numeEv;
//    char *locatie;
//public:
//    Eveniment() {}
//
//    virtual ~Eveniment() {
//
//    }
//
//    char *getNumeEv() const {
//        return numeEv;
//    }
//
//    char *getLocatie() const {
//        return locatie;
//    }
//
//    void setNumeEv(char *numeEv) {
//        Eveniment::numeEv = numeEv;
//    }
//
//    void setLocatie(char *locatie) {
//        Eveniment::locatie = locatie;
//    }
//
//    bool operator==(const Eveniment &rhs) const {
//        return numeEv == rhs.numeEv &&
//               locatie == rhs.locatie;
//    }
//
//    bool operator!=(const Eveniment &rhs) const {
//        return !(rhs == *this);
//    }
//
//    bool operator<(const Eveniment &rhs) const {
//        if (numeEv < rhs.numeEv)
//            return true;
//        if (rhs.numeEv < numeEv)
//            return false;
//        return locatie < rhs.locatie;
//    }
//
//    bool operator>(const Eveniment &rhs) const {
//        return rhs < *this;
//    }
//
//    bool operator<=(const Eveniment &rhs) const {
//        return !(rhs < *this);
//    }
//
//    bool operator>=(const Eveniment &rhs) const {
//        return !(*this < rhs);
//    }
//
//    friend ostream &operator<<(ostream &os, const Eveniment &eveniment) {
//        os << "numeEv: " << eveniment.numeEv << " locatie: " << eveniment.locatie;
//        return os;
//    }
//};
#endif //PROIECTSDA_EVENIMENT_H

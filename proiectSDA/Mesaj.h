//
// Created by Razvan on 31/05/2022.
//

#ifndef PROIECTSDA_MESAJ_H
#define PROIECTSDA_MESAJ_H


#include <string>
#include <ostream>

class Mesaj {
    std::string sender;
    std::string receiver;
    std::string info;
public:
    Mesaj() = default;
    Mesaj(const std::string &sender, const std::string &receiver, const std::string &info) : sender(sender),
                                                                                             receiver(receiver),
                                                                                             info(info) {}

    const std::string &getSender() const {
        return sender;
    }

    void setSender(const std::string &sender) {
        Mesaj::sender = sender;
    }

    const std::string &getReceiver() const {
        return receiver;
    }

    void setReceiver(const std::string &receiver) {
        Mesaj::receiver = receiver;
    }

    const std::string &getInfo() const {
        return info;
    }

    void setInfo(const std::string &info) {
        Mesaj::info = info;
    }

    bool operator==(const Mesaj &rhs) const {
        return sender == rhs.sender &&
               receiver == rhs.receiver &&
               info == rhs.info;
    }

    bool operator!=(const Mesaj &rhs) const {
        return !(rhs == *this);
    }

    friend std::ostream &operator<<(std::ostream &os, const Mesaj &mesaj) {
        os << "sender: " << mesaj.sender << " receiver: " << mesaj.receiver << " info: " << mesaj.info;
        return os;
    }
};


#endif //PROIECTSDA_MESAJ_H

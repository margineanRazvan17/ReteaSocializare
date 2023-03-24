//
// Created by Razvan on 31/05/2022.
//

#ifndef PROIECTSDA_DICTIONARY_H
#define PROIECTSDA_DICTIONARY_H
#include "Node.h"
template<class K, class V>
class Dictionary{
private:
    Node<K, V>* first;
    int size;
public:
    Dictionary(){
        this->first = nullptr;
        size = 0;
    }
    void put(K key, V value){

        if(first == nullptr){
            first = new Node<K,V>(key, value);
            this->size++;
        }
        else {
            Node<K,V>* p = first;
            while (p->next != nullptr && p->key != key) {
                p = p->next;
            }
            if (p->key == key) p->value = value;
            else p->next = new Node<K,V>(key, value), this->size++;;
        }
        this->size++;
    }

    V cauta(K key){
        Node<K,V>* p = first;
        while(p != nullptr){
            if(p->key == key) return p->value;
            p = p->next;
        }
        return {};
        //<=> return V();
    }

//    int size(){
//        Node<K,V>* p = first;
//        int contor=0;
//        while (p->next != nullptr) {
//            p = p->next;
//            contor++;
//        }
//        return contor;
//    }
    int get_size(){
        return this->size;
    }
};
#endif //PROIECTSDA_DICTIONARY_H

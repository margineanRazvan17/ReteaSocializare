//
// Created by Razvan on 31/05/2022.
//

#ifndef PROIECTSDA_NODE_H
#define PROIECTSDA_NODE_H
template <class K, class V>
class Dictionary;

template <class K, class V>
class Node {
private:
    K key;
    V value;
    Node<K,V>* next;
public:
    Node(K key, V value) : key(key), value(value){ this->next= nullptr;}
    friend class Dictionary<K,V>;
};
#endif //PROIECTSDA_NODE_H

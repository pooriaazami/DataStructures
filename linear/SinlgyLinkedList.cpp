//
// Created by yas on 2/3/2021.
//

#include "LinkedList.hpp"

template<typename T>
class SinglyLinkedList : public LinkedList<T> {
private:
    class Node {
    private:
        T data;
        Node *next;
    public:
        void setData(T t) {
            data = t;
        }

        T getData() {
            return data;
        }

        void setNext(Node *n) {
            next = n;
        }

        Node *getNext() {
            return next;
        }
    };
};
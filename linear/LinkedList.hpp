//
// Created by yas on 2/3/2021.
//

#ifndef DATASTRUCTURE_LINKEDLIST_HPP
#define DATASTRUCTURE_LINKEDLIST_HPP

#endif //DATASTRUCTURE_LINKEDLIST_HPP

/**
 * Linked list Interface
 */
template<typename T>
class LinkedList {
private:
    class Node {
    private:
        T data;
        Node *next;
    public:
        void setData(T t);

        T getData();

        void setNext(Node *n);

        Node *getNext();
    };

public:
    // It is used to append the specified element to the end of a list
    void addLast(T element);

    // It is used to insert the specified element at the specified position index in a list.
    void add(int index, T element);

    // It is used to insert the given element at the beginning of a list
    void addFirst(T element);

    // It is used to remove all the elements from a list
    void clear();

    // It is used to return the element at the specified position in a list
    T get(int index);

    // It is used to return the first element in a list
    T getFirst();

    // It is used to return the last element in a list
    T getLast();

    // It is used to return true if an element be in a list
    bool contains(T element);

    // It is used to return the index in a list of the first occurrence of the specified element, or -1 if the list does not contain any element.
    int indexOf(T element);

    //It is used to remove the element at the specified position in a list.
    T remove(int index);

    //	It is used to remove the first occurrence of the specified element in a list, if it is present.
    bool remove(T element);

    //It removes and returns the first element from a list.
    T removeFirst();

    //It removes and returns the last element from a list.
    T removeLast();

    //It replaces the element at the specified position in a list with the specified element.
    T set(int index, T element);

    //	It is used to return the number of elements in a list.
    int size();

    // If the list is empty returns true otherwise returns false
    bool isEmpty();

};
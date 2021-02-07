//
// Created by yas on 2/3/2021.
//

#ifndef DATASTRUCTURE_LINKEDLIST_HPP
#define DATASTRUCTURE_LINKEDLIST_HPP

#endif //DATASTRUCTURE_LINKEDLIST_HPP

/**
 * Linked list Interface
 */
template <typename T>
class LinkedList
{
public:
    // It is used to append the specified element to the end of a list
    virtual void addLast(T element) = 0;

    // It is used to insert the specified element at the specified position index in a list.
    virtual void add(int index, T element) = 0;

    // It is used to insert the given element at the beginning of a list
    virtual void addFirst(T element) = 0;

    // It is used to remove all the elements from a list
    virtual void clear() = 0;

    // It is used to return the element at the specified position in a list
    virtual T get(int index) = 0;

    // It is used to return the first element in a list
    virtual T getFirst() = 0;

    // It is used to return the last element in a list
    virtual T getLast() = 0;

    // It is used to return true if an element be in a list
    virtual bool contains(T element) = 0;

    // It is used to return the index in a list of the first occurrence of the specified element, or -1 if the list does not contain any element.
    virtual int indexOf(T element) = 0;

    //It is used to remove the element at the specified position in a list.
    virtual T remove(int index) = 0;

    //	It is used to remove the first occurrence of the specified element in a list, if it is present.
    virtual bool remove(T element) = 0;

    //It removes and returns the first element from a list.
    virtual T removeFirst() = 0;

    //It removes and returns the last element from a list.
    virtual T removeLast() = 0;

    //It replaces the element at the specified position in a list with the specified element.
    virtual T set(int index, T element) = 0;

    //	It is used to return the number of elements in a list.
    virtual int size() = 0;

    // If the list is empty returns true otherwise returns false
    virtual bool isEmpty() = 0;
};
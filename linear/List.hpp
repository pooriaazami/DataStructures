#pragma once

#include <iostream>

#define INITIAL_SIZE 10
#define GROWTH_RATE 1.5

template <typename T>
class List<T>
{
public:
    /**
     * default constructor 
    */
    List();

    /**
     * destructor
    */
    ~List();

    /**
     * This methid adds new data to List
     * 
    */
    void add(T data);

    /**
     * This method removes data in a specific index of List
     * 
     * returns the value the removes
    */
    T remove(int index);

    /**
     * This method searches for a specific item in the List
     * 
     * returns the index of the data if it's in the list and -1 otherwise
    */
    int find(T data);

    /**
     * indexing method
    */
    T &operator[](int index);

    /**
     * This method removes length of the List
    */
    int length();

    /**
     * This method removes capacity of the List
    */
    int capascity();

    /**
     * This method prints the List
    */
    friend std::istream(std::istream &in, List<T> &list);

private:
    T *buffer;

    int last_index;
    int capacihty;

    void grow();

    void shrink();
};
#include "Node.h"

template <class T>
Node<T>::Node(T d)
{
    data = d;
    next = NULL;
}

template <class T>
Node<T>::Node(T d, Node<T> *n)
{
    data = d;
    next = n;
}
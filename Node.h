#ifndef AVLTREE_NODE_H
#define AVLTREE_NODE_H

template <typename T>
class Node {
private:
    Node<T>* left;
    Node<T>* right;
    int height;
    T info;
public:
    Node<T>* getLeft();
    Node<T>* getRight();
    int getHeight();
    T getinfo();
    void setLeft(Node<T>*);
    void setRight(Node<T>*);
    void setHeight(int);
    void setinfo(T);
    Node(Node<T>* left, Node<T>* right, T info);
};

#include "Node.inl"

#endif



#ifndef AVLTREE_TREE_H
#define AVLTREE_TREE_H

#include "Node.h"

template <typename T>
class Tree {
public:
    void insert(const T &info);
    void remove(const T &info);
    void balance();

    Tree();

private:
    void leftRotation(Node<T>);
    void rightRotation(Node<T>);
    void leftRightRotation(Node<T>);
    void rightLeftRotation(Node<T>);


    Node<T>* root;
};

#include "Tree.inl"

#endif

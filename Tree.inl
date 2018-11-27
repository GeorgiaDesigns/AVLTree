
template<typename T>
void Tree<T>::insert(Node<root>, int data) {
    if (this->root == nullptr) {
        Node<T>* newNode  = new Node<T>(nullptr, nullptr, data);
        this->root = newNode;
    }

    if(data <= root->getinfo()){
        root->getRight() = insert(root->getLeft(),data);
    }else{
        root->getRight() = insert(root->getRight(),data);
    }

    balance();
    return ;
}

template<typename T>
bool Tree<T>::isLeaf() {
    return false;
}

template<typename T>
void Tree<T>::balance() {

    int balanceFactor = (root->getLeft())->getHeight() - (root->getRight())->getHeight();

    if (balanceFactor > 1){
        if()
          //  https://www.youtube.com/watch?v=rbg7Qf8GkQ4
    }

}

template<typename T>
void Tree<T>::leftRotation(Node<T>) {

}

template<typename T>
void Tree<T>::rightRotation(Node<T>) {

}

template<typename T>
void Tree<T>::leftRightRotation(Node<T>) {

}

template<typename T>
void Tree<T>::rightLeftRotation(Node<T>) {

}

template<typename T>
void Tree<T>::remove(const T &info) {

}

template<typename T>
Tree<T>::Tree() {
    this->root =  nullptr;
}

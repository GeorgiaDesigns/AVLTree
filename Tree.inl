
template<typename T>
void Tree<T>::insert(const T &info) {
    if (this->root == nullptr) {
        Node<T>* novoNo  = new Node<T>(nullptr, nullptr, 0, info);
        this->root = novoNo;
    }

    balance();
    return ;
}

template<typename T>
void Tree<T>::balance() {

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

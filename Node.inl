template<typename T>
Node<T> *Node<T>::getLeft() {
    return this->left;
}

template<typename T>
Node<T> *Node<T>::getRight() {
    return this->right;
}

template<typename T>
int Node<T>::getBalanceFactor() {
    return this->balanceFactor;
}

template<typename T>
void Node<T>::setLeft(Node<T> *data) {
    this->left = data;
}

template<typename T>
void Node<T>::setRight(Node<T> *data) {
    this->right = data;
}

template<typename T>
void Node<T>::setBalanceFactor(int factor) {
    this->balanceFactor = factor;
}

template<typename T>
T Node<T>::getinfo() {
    return this->info;
}

template<typename T>
void Node<T>::setinfo(T data) {
    this->info = data;
}

template<typename T>
Node<T>::Node(Node<T> *left, Node<T> *right, int balanceFactor, T info) {
    setLeft(left);
    setRight(right);
    setBalanceFactor(balanceFactor);
    setinfo(info);
}



template<typename T>
Node<T> *Node<T>::getLeft() {
    return this->left;
}

template<typename T>
Node<T> *Node<T>::getRight() {
    return this->right;
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
T Node<T>::getinfo() {
    return this->info;
}

template<typename T>
int Node<T>::getHeight() {
    return this->height;
}

template<typename T>
void Node<T>::setinfo(T data) {
    this->info = data;
}

template<typename T>
void Node<T>::setHeight(int h) {
    this->height = h;
}

template<typename T>
Node<T>::Node(Node<T> *left, Node<T> *right, int height, T info) {
    setLeft(left);
    setRight(right);
    setHeight(height);
    setinfo(info);
}

//template<typename T>
//Override
//Node<T>::Node(T info) {
//    setLeft(left);
//    setRight(right);
//    setinfo(info);
//}



#include <iostream>
#include "Tree.h"

int main() {

    auto * arvoreA = new Tree<int>();

    arvoreA->insert(15);
    arvoreA->insert(27);
    arvoreA->insert(49);
    arvoreA->insert(10);
    arvoreA->insert(8);
    arvoreA->insert(67);
    arvoreA->insert(59);
    arvoreA->insert(9);
    arvoreA->insert(13);
    arvoreA->insert(20);
    arvoreA->insert(14);

}
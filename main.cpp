/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: snbl
 *
 * Created on August 15, 2018, 7:20 PM
 */

#include "BinaryTree.h"

using namespace std;




int main(int argc, char** argv) {

        
    for (int i = 0; i < 2; i++) {
    Node<int>* root = new Node<int>(100);
    
    insert<int>(root, 12);
    insert<int>(root, 400);
    insert<int>(root, 1);
    insert<int>(root, 6);
    insert<int>(root, 300);
    insert<int>(root, 45);
    insert<int>(root, 299);
    
    printNodes<int>(root);
    destroyTree(root);
    delete root;
    }
    
    return 0;
}


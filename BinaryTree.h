/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryTree.h
 * Author: snbl
 *
 * Created on August 15, 2018, 7:20 PM
 */

#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <sstream>
#include <iomanip>
#include <vector>
#include <iostream>

template <typename T>
struct Node;

template <typename T>
void destroyTree(Node<T>* root)
{
    if (root->left) {
        destroyTree(root->left);
        delete root->left;
    }
    if (root->right) {
        destroyTree(root->right);
        delete root->right;
    }
}

template <typename T>
struct Node {
    Node(T data) : left{nullptr}, right{nullptr}, m_data{data} {}
    Node<T>*    left;
    Node<T>*    right;
    T           m_data;
    bool operator<(const Node* rhs) const {
        return this->m_data < rhs->m_data;
    }
    bool operator>(const Node* rhs) const {
        return this->m_data > rhs->m_data;
    }
};


template <typename T>
Node<T>* insert(Node<T>* node, T data)
{
    if (node == nullptr) return new Node<T>(data);
    if (data < node->m_data)
        node->left = insert(node->left, data);
    if (data > node->m_data)
        node->right = insert(node->right, data);
    return node;
}


template <typename T>
void printNodes(Node<T>* root) 
{
    if (root != nullptr) {
        printNodes(root->left);
        std::cout << root->m_data << "\n";
        printNodes(root->right);        
    }
}

#endif /* BINARYTREE_H */


#ifndef LL_H
#define LL_H

#include <bits/stdc++.h>
using namespace std;

class Node {
public: // access modifier
    int data; // the data value
    Node* next; // the pointer to the next value

    // constructor
    Node(int data1, Node* next1) {
        data = data1;  // Initialize data with the provided value
        next = next1;  // Initialize next with the provided
    }

    Node(int data1) {
        data = data1;  // Initialize data with the provided value
        next = nullptr;  // Initialize next as null since it's the end of the list
    }
};

#endif
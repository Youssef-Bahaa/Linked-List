//
// Created by 20109 on 3/26/2025.
//

#ifndef LL_H
#define LL_H
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
    int val{};
    Node *next{};
};



class LinkedList {
private:
    Node *head{};
    Node *tail{};
    int length{};

public:
    void print();
    void insert(int data);
    void delete_val(int val);
    void delete_first();
    void delete_last();
    void delete_idx(int idx);
    Node* get_nth_node(int n);
    int search(int val);
    int size();
    bool is_empty();
    void clear();
    int get_first();
    int get_last();
    void sort();
};









#endif //LL_H


#ifndef DLLIST_H
#define DLLIST_H

#endif //DLLIST_H

#include <iostream>
using namespace std;

template<class T>
class DLList {
public:
    struct Node {
        Node* prev;
        Node next;
        T value;

        Node(T val) : next(nullptr), prev(nullptr), value(val) {}
    };

    DLList() {
        head = nullptr;
        tail = nullptr;
        numItems = 0;
    }

    ~DLList() {
        clear();
    }

    const Node* get_head() const {
        return head;
    }

    void push_front(T item) {
        
    }

    void push_back(T item) {

    }

    void insert(T item, int position) {

    }

    void pop_front() {

    }

    void pop_back() {

    }

    void remove(int position) {

    }

    const T& front() const {

    }

    const T& back() const {

    }

    const T& at(int index) const {

    }

    bool contains(const T& item) {

    }

    int size() const {
        return numItems;
    }

    void clear() {

    }





private:
    Node* head;
    Node* tail;
    int numItems;
};


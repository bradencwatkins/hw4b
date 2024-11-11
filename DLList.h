
#ifndef DLLIST_H
#define DLLIST_H
#endif

#include <iostream>
using namespace std;

template<class T>
class DLList {
public:
    struct Node {
        Node* prev;
        Node* next;
        T value;

        Node(T val) : prev(nullptr), next(nullptr), value(val) {}
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

    void push_back(T item) {
        Node* n = new Node(item);
        if (head == nullptr) {
            head = n;
            tail = n;
        }
        else {
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
    }

    void push_front(T item) {
        Node* n = new Node(item);
        if (head == nullptr) {
            head = n;
            tail = n;
        }
        else {
            n->next = head;
            head->prev = n;
            head = n;
        }
    }

    void insert(T item, int position) {
        for (int i = 0; i < position; i++) {
            
        }
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


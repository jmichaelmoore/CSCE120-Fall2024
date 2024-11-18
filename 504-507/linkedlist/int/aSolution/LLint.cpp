#include "LLint.h"

using std::cout, std::endl;

void LLint::insertFront(const int& data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    if (tail == nullptr) {
        tail =  newNode;
    }
}

void LLint::insertBack(const int& data) {
    Node* newNode = new Node(data);
    if (tail != nullptr) {
        tail->next = newNode;
    }
    else {
        head = newNode;
    }
    tail = newNode;
}

void LLint::insertAfter(const int& valToInsert, const int& valToFind) {
    Node* cur = find(valToFind);
    if (cur == nullptr) { return; }
    Node* newNode = new Node(valToInsert);
    newNode->next = cur->next;
    cur->next = newNode;
    if (newNode->next == nullptr) { // (cur == tail)
        tail = newNode;
    }
}

void LLint::insertBefore(const int& valToInsert, const int& valToFind) {
    Node* cur = head;
    Node* prev = nullptr;
    while (cur != nullptr && valToFind != cur->data) {
        prev = cur;
        cur = cur->next;
    }
    if (cur == nullptr) { return; }
    Node* newNode = new Node(valToInsert);
    newNode->next = cur;
    if (prev != nullptr) {
        prev->next = newNode;
    }
    else { // new head
        head = newNode;
    }
}

void LLint::print(std::ostream& os) const {
    Node* cur = head;
    while (cur != nullptr) {
        os << cur->data << endl;
        cur = cur->next;
    }
}

void LLint::printReverse(std::ostream& os) {
}

std::ostream& operator<<(std::ostream& os, const LLint& ll) {
    ll.print(os);
    return os;
}

Node* LLint::find(const int& val) {
    Node* cur = head;
    while (cur != nullptr && val != cur->data) {
        cur = cur->next;
    }
    return cur;
}

bool LLint::hasValue(const int& val ){
    return find(val) != nullptr;
}

void LLint::remove(const int& val) {
    Node* cur = head;
    Node* prev = nullptr;
    while (cur != nullptr && cur->data != val) {
        cur = cur->next;
    }
    if (cur == nullptr) { return; }
    if (prev != nullptr) {
       prev->next = cur->next;
    }
    else { // new head
        head = cur->next;
    }
    delete cur;
}
#include "LLint.h"

using std::cout, std::endl;

void LLint::insertFront(const int& data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        tail = newNode;
    }
    else {
        newNode->next = head;
    }
    head = newNode;
}

void LLint::insertBack(const int& data) {
    Node* newNode = new Node(data);
    if (tail == nullptr) {
        head = newNode;
    }
    else {
        tail->next = newNode;
    }
    tail = newNode;
}

void LLint::insertAfter(const int& valToInsert, const int& valToFind) {
    if (head == nullptr) { return; }
    Node* insertNode = find(valToFind);
    if (insertNode == nullptr) { return; }
    Node* newNode = new Node(valToInsert);
    newNode->next = insertNode->next;
    insertNode->next = newNode;
    if (insertNode == tail) {
        tail = newNode;
    }
}

void LLint::insertBefore(const int& valToInsert, const int& valToFind) {
        if (head == nullptr) { return; }
    Node* cur = head;
    Node* prev = nullptr;
    while (cur != nullptr && cur->data != valToFind) {
        prev = cur;
        cur = cur->next;
    }
    if (cur == nullptr) { return; }
    Node* newNode = new Node(valToInsert);
    newNode->next = cur; // newNode->next = prev->next;
    if (prev !=nullptr) {
        prev->next = newNode;
    }
    else {
        head = newNode;
    }

}

void LLint::print(std::ostream& os) const {
    Node* cur = head;
    while (cur != nullptr) {
        cout << cur->data << endl;
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
    while (cur != nullptr && cur->data != val) {
        cur = cur->next;
    }
    return cur;
}

bool LLint::hasVal(const int& val) {
    return find(val);
}

void LLint::remove(const int& val) {
    if (head == nullptr) { return; }
    Node* cur = head;
    Node* prev = nullptr;
    while (cur != nullptr && cur->data != val) {
        cur = cur->next;
    }
    if (cur==nullptr) { return; }
    if (prev==nullptr) {
        head = cur->next;
    }
    else {
        prev->next = cur->next;
    }
    if (cur == tail) {
        tail = prev;
    }
    delete cur;
}
    
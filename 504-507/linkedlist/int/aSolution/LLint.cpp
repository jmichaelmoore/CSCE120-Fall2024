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
}

void LLint::insertBefore(const int& valToInsert, const int& valToFind) {
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
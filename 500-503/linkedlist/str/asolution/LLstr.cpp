#include <iostream>
#include "LLstr.h"

using std::cout, std::endl;

void LLstr::insertFront(const char& val) {
    Node* newNode = new Node(val);
    if (head != nullptr) {
        newNode->next = head;
        head->prev = newNode;
    }
    else {
        tail = newNode;
    }
    head = newNode;

}

void LLstr::insertBack(const char& val) {
    Node* newNode = new Node(val);
    if (tail != nullptr) {
        tail->next = newNode;
        newNode->prev = tail;
    }
    else { // need to set head as well
        head = newNode;
    }
    tail = newNode;
}

void LLstr::print(std::ostream& os) const {
    Node* cur = head;
    while (cur != nullptr) {
        cout << cur->letter;
        cur = cur->next;
    }
}

void LLstr::printReverse(std::ostream& os) const {
    Node* cur = tail;
    while (cur != nullptr) {
        cout << cur->letter;
        cur = cur->prev;
    }
}

LLstr::LLstr(const std::string& src) : head(nullptr), tail(nullptr) { // copy std::string
    for (size_t i=0; i<src.size(); ++i) {
        insertBack(src.at(i));
    }
}

LLstr::LLstr(const char* src) : head(nullptr), tail(nullptr) { // copy c-string
    size_t i = 0;
    while (src[i] != '\0') {
        insertBack(src[i]);
        i++;
    }
}

std::ostream& operator<<(std::ostream& os, const LLstr& src) {
    src.print(os);
    return os;
}

Node* LLstr::find(const char& val) {
    Node* cur = head;
    while (cur != nullptr && cur->letter != val) {
        cur = cur->next;
    }
    return cur;
}

bool LLstr::hasChar(const char& val) {
    return find(val) != nullptr;
}

void LLstr::insertAfter(const char& valToAdd, const char& valToFind) {
}

void LLstr::insertBefore(const char& valToAdd, const char& valToFind) {
}

void LLstr::remove(const char& c) {
}
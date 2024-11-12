#ifndef LLSTR_H
#define LLSTR_H

#include <iostream>

struct Node {
    char letter;
    Node* next;
    Node* prev;
    Node(int letter) : letter(letter), next(nullptr), prev(nullptr) {}
};

class LLstr {
    Node* head;
    Node* tail;
    Node* find(const int& val);
  public:
    //constructors & deconstructor
    LLstr() : head(nullptr), tail(nullptr) {}
    LLstr(const std::string&); // copy std::string
    LLstr(const char*); // copy c-string

    // setters and getters
    void insertFront(const char& val);
    void insertBack(const char& val);
    void insertAfter(const char& valToAdd, const char& valToFind);
    void insertBefore(const char& valToAdd, const char& valToFind);

    void remove(const char&);

    char peekFront() const;
    char peekBack() const;

    bool hasChar(const char& val);

    void print(std::ostream& = std::cout) const;
    void printReverse(std::ostream& = std::cout) const;
};

std::ostream& operator<<(std::ostream&, const LLstr&);

#endif
#include <iostream>
#include "LLstr.h"

using std::cout, std::endl;

void LLstr::insertFront(const char& val) {
}

void LLstr::insertBack(const char& val) {
}

void LLstr::print(std::ostream& os) const {
}

void LLstr::printReverse(std::ostream& os) const {
}

LLstr::LLstr(const std::string& src) : head(nullptr), tail(nullptr) { // copy std::string
}

LLstr::LLstr(const char* src) : head(nullptr), tail(nullptr) { // copy c-string
}

std::ostream& operator<<(std::ostream& os, const LLstr& src) {
    src.print(os);
    return os;
}

Node* LLstr::find(const int& val) {
}

bool LLstr::hasChar(const char& val) {
    return false; // stubb
}

void LLstr::insertAfter(const char& valToAdd, const char& valToFind) {
}

void LLstr::insertBefore(const char& valToAdd, const char& valToFind) {
}

void LLstr::remove(const char& c) {
}
#include "DynamicInt.h"

DynamicInt& DynamicInt::operator=(int val) { 
  *(this->val) = val; 
  return *this;
}

std::ostream& operator<<(std::ostream& os, const DynamicInt& src) {
  os << src.get();
  return os;
}

DynamicInt::~DynamicInt() {
  delete val;
  val = nullptr;
}

DynamicInt::DynamicInt(const DynamicInt& src) : 
  val(new int(*(src.val))) {}

DynamicInt& DynamicInt::operator=(const DynamicInt& src) {
  if (this != &src) {
    delete val;
    val = new int(*(src.val));
  }
}
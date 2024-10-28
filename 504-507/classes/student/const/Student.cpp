#include <cstdio>
#include <iostream>
#include "Student.h"

using std::string, std::cout, std::endl;

Student::Student(int uin){ //Pre-C++11
  this->uin = uin;
  this->name = "Joe Bloggs";
}

Student::Student(string _name){ //Dropped implicit "this" but used odd parameter name
  name = _name;
  uin = 0;
}

Student::Student(string name, int uin): name(name), uin(uin) {} //Member initialization list *Preferred*

Student::Student() { //Default constructor (do we even want this?)
  name = "";
  uin = 0;
}
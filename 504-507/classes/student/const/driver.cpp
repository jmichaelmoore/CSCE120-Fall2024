#include <iostream>
#include "Student.h"

using std::cout, std::endl;

int main() {

  auto Student1 = Student("Alice", 1234);
  // Student Student1("Alice", 1234);
  auto Student2 = Student("Bob");
  // Student Student2("Bob");
  Student Student3 = Student(5678);
  // Student Student3(5678);
  Student Student4 = Student();
  // Student Student4;

  cout << "My name is " << Student1.getName() << "and my UIN is" << Student1.getUIN() << endl;
  cout << "My name is " << Student2.getName() << "and my UIN is" << Student2.getUIN() << endl;
  cout << "My name is " << Student3.getName() << "and my UIN is" << Student3.getUIN() << endl;
  cout << "My name is " << Student4.getName() << " and my UIN is " << Student4.getUIN() << endl;
}
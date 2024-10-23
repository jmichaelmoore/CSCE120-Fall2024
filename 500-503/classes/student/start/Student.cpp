#include <cstdio>
#include <iostream>

using std::string, std::cout, std::endl;

class Student {
  
  private:
    
    string name;
    int uin;
  
  public:
    
    //Constructors
    Student(std::string name, int uin);
    Student(std::string name);
    Student(int uin);
    Student();

    //Methods
    string getName() const { return name; }
    int getUIN() const { return uin; }
};

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

int main(){

  auto Student1 = Student("Alice", 1234);
  // Student Student1("Alice", 1234);
  auto Student2 = Student("Bob");
  // Student Student2("Bob");
  Student Student3 = Student(5678);
  // Student Student3(5678);
  Student Student4 = Student();
  // Student Student4;

  cout << "My name is " << Student1.name << "and my UIN is" << Student1.uin << endl;
  cout << "My name is " << Student2.name << "and my UIN is" << Student2.uin << endl;
  cout << "My name is " << Student3.name << "and my UIN is" << Student3.uin << endl;
  cout << "My name is " << Student4.name << " and my UIN is " << Student4.uin << endl;
}
#include <iostream>

using std::cin, std::cout, std::endl, std::string;

// define a struct Person
// include firstname, lastname, grade
struct Person {
    string firstname = "";
    string lastname = "";
    char grade = 'F';
};

int main() {
    // declare / define a struct variable
    Person p = {"Michael", "Moore", 'B'};
    Person b = p;
    b.grade = 'C';
    // assign values to elements of the struct
    //p.firstname = "Michael";
    //p.lastname = "Moore";
    //p.grade = 'B';
    // individually to each element then to all elements at one time
    // access elements of the struct - i.e. print them
    cout << p.firstname << " " << p.lastname << ": " << p.grade << endl;
    cout << b.firstname << " " << b.lastname << ": " << b.grade << endl;
}
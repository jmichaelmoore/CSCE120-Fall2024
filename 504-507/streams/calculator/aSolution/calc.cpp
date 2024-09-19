#include <iostream>
#include <sstream>

using std::cin, std::cout, std::endl, std::string;

string formatResult(double a, double b, char op, double result) {
    // format using ostringstream
    std::ostringstream oss;
    oss << a << " " << op << " " << b << " = " << result << endl;
    return oss.str();
}

int main() {
    string line;
    cout << "Enter equation in one line: " << endl;
    // use getline, explain polymorphism and inheritance
    std::getline(cin, line);
    // use istringstream to extract values from line
    std::istringstream iss(line);
    double result = 0;
    double firstNum = 0;
    double secondNum = 0;
    char op = ' ';
    iss >> firstNum >> op >> secondNum;
    // determine what to do based on the op
    switch (op) {
        case '+': result = firstNum + secondNum; break;
        case '-': result = firstNum - secondNum; break;
        case '*': result = firstNum * secondNum; break;
        case '/': result = firstNum / secondNum; break;
    }
    cout << "result: " << result << endl;
    cout << formatResult(firstNum, secondNum, op, result) << endl;
}
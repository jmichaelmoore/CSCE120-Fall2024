#include <iostream>

using std::cin, std::cout, std::endl, std::string;

// deal with specific exception
// parent exception
// any exception

int main() {
    string word = "supercalifragilisticexpialidocious"; // constructor initialzies to empty string, we'll see this soon
    size_t index = 0;
    do {
        cout << "Enter index to show letter or 9999 to exit: ";
        cin >> index;
        cout << word.at(index) << " is the letter at index " << index << endl;
    } while (index != 9999);
}
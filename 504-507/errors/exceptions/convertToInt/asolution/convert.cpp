#include<iostream>
#include<string>

using std::cin, std::cout, std::endl, std::string;

int main() {
    string term; // constructor initialzies to empty string
    do {
        cout << "Enter term to convert: ";
        cin >> term;
        size_t sz = 0;
        try {
            int val = std::stoi(term,&sz);
            cout << term << " times 2 is " << (val*2) << endl;
        }
        catch (std::invalid_argument& e) {
            cout << "Input was not a number" << endl;
        }
        catch (std::out_of_range& e) {
            cout << "Number does not fit in the computer" << endl;
        }
    } while (term != ".");
}
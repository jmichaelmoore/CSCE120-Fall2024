#include <iostream>
#include <limits>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int no_lines;
    cout << "Please provide a number of lines to print the stair-case pattern : ";
    cin >> no_lines;
    while (cin.fail() || no_lines < 1 || no_lines > 80) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Please provide a number of lines to print the stair-case pattern : ";
        cin >> no_lines;
    }
    
    for (unsigned int i = 1; i <= no_lines ; ++i) {
        for (unsigned int j = 1 ; j <= i ; ++j) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
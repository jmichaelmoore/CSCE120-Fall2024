#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
    double sum = 0;
    double cnt = 0;
    double num = 0;
    do {
        cin >> num;
        if (num >= 0) {
            sum += num; // sum = sum + num;
            cnt++; // cnt = cnt + 1;
        }
    } while (num >= 0);
    cout << "average: ";
    if (cnt == 0) {
        cout << "empty list";
    }
    else {
        cout << sum/cnt;
     }
     cout << endl;
}
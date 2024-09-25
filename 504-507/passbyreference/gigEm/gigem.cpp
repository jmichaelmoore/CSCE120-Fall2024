#include <iostream>

using std::cout, std::endl;

int em(int a, int b) {
   int k = 2;
   int whoop = a + b + k;
   return whoop;
}

int gig(int rev) {
   int howdy = 1;
   int yell = em(rev, howdy)-2;
   return yell;
}

int main() {
   int twelfthMan = gig(em(1, 2))-4;
   cout << "twelfthMan: " << twelfthMan << endl;
}
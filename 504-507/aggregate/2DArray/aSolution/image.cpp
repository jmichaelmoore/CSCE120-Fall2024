#include <iostream>
#include "functions.h"

using namespace std;

void printMenu();
unsigned int getInteger(const std::string label, unsigned int min, unsigned int max);

int main() {
  // declare/define image 2d array of Pixels
  // would be too big for the stack, so 'static' puts it somewhere else but scope is still in main
  
  char menuChoice = ' '; // selected menu option
  do {
    printMenu();
    cin >> menuChoice;
    switch (toupper(menuChoice)) { // use toupper so user can input upper or lower case choices
      case 'G':
      case 'S':
      case 'R':
        //processImage(menuChoice, image); // use fall through
        break;
      case 'Q': // does nothing but needed or default will execute
        break;
      default:
        cout << endl << "'" << menuChoice << "' is not a valid option'" << endl << endl;
    }
  } while (toupper(menuChoice) != 'Q'); // use toupper so user can input upper or lower case choices
}

/*  Function printMenu
 *  Return value: none
 */
// You should not modify this function. //
void printMenu()
{
  cout << "----------------------------------" << endl;
  cout << " 'G': Make grayscale image" << endl;
  cout << " 'S': Make sepia image" << endl;
  cout << " 'R': Make reverse grayscale image" << endl;
  cout << " 'Q': Quit" << endl;
  cout << "----------------------------------" << endl;
  cout << endl
       << "Please enter your choice: ";
}

/*  Function getInteger
 *  label: label for outputing what the user is inputting, it should work when used as "Please enter <label>"
 *  min: int value indicating the smallest value the user should provide
 *  max: int value indicating the largest value the user should provide
 *  Return value: int value within the range min <= value <= max
 */
// You should not modify this function. //
unsigned int getInteger(const string label, unsigned int min, unsigned int max)
{
  // get value from user repeatedly until input matches requirements
  unsigned int num = 0;
  do
  {
    cin.clear();                                         // reset stream states
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer

    cout << "Please enter " << label << " (" << min << " - " << max << "): ";
    cin >> num;
  } while (!cin.good() || num < min || num > max); // while input does not match requirements
  return num;
}
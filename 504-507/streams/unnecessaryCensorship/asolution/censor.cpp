#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using std::cin, std::cout, std::cerr, std::endl, std::string;
using std::istringstream, std::ifstream, std::ofstream;


int main(int argc, char *argv[]) {
	// use hard coded if files are not provided
	string censorWordsFilename = "censorwords.txt";
	string originalTextFilename = "frozen.txt";
	
	// Get filenames if provided in command line arguments
	string censoredTextFilename = "censored-"+originalTextFilename;

	// Declare/Define/Open filestreams
	ifstream cwi(censorWordsFilename);
	ifstream oi(originalTextFilename);
	ofstream co(censoredTextFilename);

	// make sure all files were opened and give feedback if not
	if (!cwi.is_open()) {
		cout << "unable to open file: " + censorWordsFilename << endl;
		return 1;
	}
	if (!oi.is_open()) {
		cout << "unable to open file: " + originalTextFilename << endl;
		return 1;
	}
	if (!co.is_open()) {
		cout << "unable to open file: " + censoredTextFilename << endl;
		return 1;
	}

	// get list of words to censor from file
	string censorWd;
	string censorWds;
	while (cwi>>censorWd) {
		censorWds += (censorWd + " ");
	}

	// print out list of censored words (for debugging) remove later from final program
	cout << "censorWds: " << censorWds << endl;

	while (!oi.eof()) {
		string line;
	// read original, process and send to output
		getline(oi, line);
	// process line by line
		// get next line
		// see if each censor word is in line
		// if it is there, replace with symbols
		// output modified line
		co << line << endl;
	}
}
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using std::cin, std::cout, std::cerr, std::endl, std::string;
using std::istringstream, std::ifstream, std::ofstream;

string getReplace(string wd) {
	return "***";
}

int main(int argc, char *argv[]) {
	// use hard coded if files are not provided
	string censorWordsFilename = "censorwords.txt";
	string originalTextFilename = "frozen.txt";

	// Get filenames if provided in command line arguments
	string censoredTextFilename = "censored-" + originalTextFilename;

	// Declare/Define/Open filestreams

	// make sure all files were opened and give feedback if not

	// get list of words to censor from file

	// print out list of censored words (for debugging) remove later from final program

	// read original, process and send to output
	// process line by line
		// get next line
		// see if each censor word is in line
		// if it is there, replace with symbols
		// output modified line
}
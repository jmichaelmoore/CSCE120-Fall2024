#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using std::cin, std::cout, std::cerr, std::endl, std::string;
using std::istringstream, std::ifstream, std::ofstream;

string tolower(string str) {
	for (size_t i=0; i<str.size(); ++i) {
		str.at(i) = tolower(str.at(i));
	}
	return str;
}

string randomChar(size_t size) {
	string str;
	string symbols = "%$#@&!?~|";
	for (size_t i=0; i<size; ++i) {
		size_t index = random()%symbols.size();
		str += symbols.at(index);
	}
	return str;
}

int main(int argc, char *argv[]) {
	// use hard coded if files are not provided
	string censorWordsFilename = "censorwords.txt";
	string originalTextFilename = "frozen.txt";
	if (argc >= 3) {
		originalTextFilename = argv[1];
		censorWordsFilename = argv[2];
	}
	else {
		cout << "Not enough parameters" << endl;
		return 1;
	}
	// Get filenames if provided in command line arguments
	string censoredTextFilename = "censored-"+originalTextFilename;

	// Declare/Define/Open filestreams
	ifstream cwi(censorWordsFilename);
	ifstream oi(originalTextFilename);
	ofstream co(censoredTextFilename);

	// make sure all files were opened and give feedback if not
	if (!cwi.is_open()) {
		cout << "unable to open file: " + censoredTextFilename << endl;
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
		censorWds += (tolower(censorWd) + " ");
	}
	
	// print out list of censored words (for debugging) remove later from final program
	cout << "censorWds: " << censorWds << endl;

	// read original, process and send to output
	while (!oi.eof()) {
		// process line by line
		string line;
		getline(oi, line);
		string linelower = tolower(line);
			// get next line
		std::istringstream iss(censorWds);
		while (!iss.eof()) {
			iss >> censorWd;
			size_t position = string::npos; 
			do {
				position = linelower.find(censorWd);
				if (position != string::npos) {
					// replace word
					line.replace(position, censorWd.size(), randomChar(censorWd.size()));
					linelower.replace(position, censorWd.size(), randomChar(censorWd.size()));
				}
			} while (position != string::npos);
		}
		// see if each censor word is in line
		// if it is there, replace with symbols
		// output modified line
		co << line << endl;
	}
}
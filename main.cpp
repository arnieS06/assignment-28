// mainfile
#include <iostream>
#include <iomanip>
#include <sstream>
#include "convert.h"
using namespace std;

int main() {
	double input;

	cout << "Give me a decimal number: ";
	cin >> input;

	if (cin.fail()) {
		cout << "You gave bad input." << endl;
	}

	else {
		string result = convert(input);
		cout << "\nAs a string this is " << result;
	}

	return 0;
}


string convert(double number) {
	stringstream stream;
	stream << fixed << setprecision(2) << number;
	string stringValue = stream.str();

	return stringValue;
}

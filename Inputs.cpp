#include <iostream>
using namespace std;

int main() {
	cout << "Enter your name: " << flush;
	string input;
	cin >> input; //>> is extraction operator; taking the c-input and putting it into variable input

	cout << "Your name is: " << input << endl;


	cout << "Enter your ID: " << flush;
	int value;
	cin >> value;
	cout << "Your ID is " << value << endl; //Returns zero when user inputs strings/chars

	return 0;
}

//If a space in written as part of the input, it immediately gets fed into the next input
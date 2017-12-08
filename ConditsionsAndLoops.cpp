#import <iostream>

using namespace std;

int main() {
	string pw = "Hello";
	cout << "Enter your password: " << flush;

	string input;
	cin >> input;

	cout << " ' " << input << " ' " << endl;

	if (input == pw) {
		cout << "Enter" << endl;
	}
	else {
		cout << "Wrong pw" << endl;
	}
	
}
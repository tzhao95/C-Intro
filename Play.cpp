#include <iostream>
#include <limits>

using namespace std;

int main() {
	//cout << INT_MAX << endl;
	//cout << INT_MIN << endl;

	cout << "Size of int" << sizeof(int) << endl;
	int intMax = INT_MAX;
	int intMin = INT_MIN;
	cout << "Range of ints: " << intMin << " to " << intMax << endl;

	cout << "Size of short" << sizeof(short) << endl;
	short shortMax = SHRT_MAX;
	short shortMin = SHRT_MIN;
	cout << "Range of short: " << shortMin << " to " << shortMax << endl;

	cout << "Size of long" << sizeof(long) << endl;
	long longMax = LONG_MAX;
	long longMin = LONG_MIN;
	cout << "Range of longs: " << longMin << " to " << longMax << endl;

}
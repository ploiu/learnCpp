#include <iostream>
using namespace std;

int main() {
	int auks = 19.99 + 11.99; // should be 31
	int bats = (int)19.99 + (int)11.99; // should be 30
	int coots = int(19.99) + int(11.99); // new C++ syntax...it's weird but I get why it's like this; should be 30
	// show which each value is
	cout << "auks: " << auks << ", bats: " << bats << ", coots" << coots << endl;

	// now do char typecasts
	char ch = 'Z';
	cout << "The code for " << ch << " is " << (int)ch << endl;
	// use static_cast to cast the char. Static cast is intentionally more limited than a regular cast
	cout << "With static_cast: " << static_cast<int>(ch) << endl;
	return 0;
}

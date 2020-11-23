#include <iostream>

int main() {
	using std::cout;
	using std::cin; 
	using std::endl;

	char c;
	cout << "enter a char" << endl;
	cin >> c;
	cout << "character entered: " << c << endl;
	cout << "numeric representation: " << (int)c << endl;
	cout << "Is char straight up equal to int version? " << (c == (int)c) << endl;
	return 0;
}
	

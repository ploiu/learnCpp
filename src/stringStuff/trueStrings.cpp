#include <iostream>
#include <string>

using namespace std;

int main() {
	char charr[20];
	char charr2[20] = "jaguar";
	// now use actual strings
	string str1;
	string str2 = "panther";
	// ask for user input into charr
	cout << "enter a type of feline: " << endl;
	cin >> charr;
	cout << "enter another type of feline: " << endl;
	cin >> str1; // still use cin for string input
	cout << "Here are some felines: " << endl;
	cout << charr << " " << charr2 << endl << str1 << " " << str2 << endl;
	return 0;
}

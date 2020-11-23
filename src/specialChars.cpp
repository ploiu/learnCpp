#include <iostream>
using namespace std;

int main() {
	const char newline = '\n';
	const char horizontalTab = '\t';
	const char verticalTab = '\v';
	const char backspace = '\b';
	const char carriageReturn = '\r';
	const char alert = '\a';
	
	// do some tests with the escape sequences
	cout << "newline\nhi" << endl;
	cout << "tab:\ttest" << endl;
	cout << "vertical\vtab\n";
	cout << "backspace\b\b\b\b\b test" << endl;
	cout << "hello there!\rGeneral Kenobi!" << endl;
	cout << "\a" << endl;
	return 0;
}

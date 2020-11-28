#include <iostream>
#include <cstring> // for strlen
using namespace std;

int main() {
	const int size = 15; // the length of the string
	char name[size];
	char name2[size] = "C++owboy";
	// I think the book examples are cringy, but here we go
	cout << "Howdy! I'm " << name2 << "! What's your name?" << endl;
	cin >> name;
	cout << "Well, " << name << ", your name has " << strlen(name) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name) << " bytes.\nYour initial is " << name[0] << ".\n";
	//set the null character in the middle of name2 to stop the printing of the rest of the string
	name2[3] = 0;
	cout << "The first three letters of my name are " << name2 << endl;
	return 0;
}

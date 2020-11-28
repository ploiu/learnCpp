#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char charr[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// different ways of assigning strings based on the underlying type
	str1 = str2; // direct assignment on string objects
	strcpy(charr, charr2); // meanwhile we use strcpy for char arrays

	// different ways to append to the end of the string
	str1 += " paste"; // += operator for string objects
	strcat(charr, " juice"); // strcat for character arrays

	// different ways to find the string length depending on the underlying type
	const int len = str1.size();
	const int charLen = strlen(charr);

	cout << "The string " << str1 << " contains " << len << " characters \nmeanwhile " << charr << " contains " << charLen << " characters\n";
	return 0;
}

#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	const int size = 20;
	char name[size];
	char dessert[size];
	// get user input and stuff
	cout << "Enter your name: " << endl;
	// use cin.getLine instead of cin so that we can put a limit on the name length and read the entire line
	cin.getline(name, size);
	cout << "Enter your favorite dessert: \n";
	cin.getline(dessert, size);
	cout << "I have some delicious " << dessert << " for you, " << name << endl;
	return 0;
}


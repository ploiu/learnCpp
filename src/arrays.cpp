#include <iostream>
using namespace std;

int main() {
	int yams[3];
	yams[0] = 7;
	yams[1] = 6;
	yams[2] = 5;

	// declare and initialize at the same time
	int yamCosts[3] = {20, 30, 5};
	cout << "Total Yams: " << (yams[0] + yams[1] + yams[2]) << endl;
	cout << "The package with " << yams[0] << " costs " << yamCosts[0] << endl;
	/* The rest from the book's example doesn't matter. I know how arrays work and just wanted
	 * to try the slightly different syntax from what I'm used to */
	return 0;
}


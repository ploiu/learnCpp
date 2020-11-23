#include <iostream>
#include <cmath>
using namespace std;

double test(int x);

int main() {
	double x = test(100);
	cout << x << endl;
	return 0;
}

double test(int x) {
	return sqrt(x);
}

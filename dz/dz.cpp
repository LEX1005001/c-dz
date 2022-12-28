#include <iostream>
using namespace std;
int main() {
	float L = 0;
	float pi = 3.14;
	float R = 0;

	cout << "L:";
		cin >> L;
	
	R = L / (2 * pi);
	
	cout << "S=" << 2 * pi * (R*R);
}

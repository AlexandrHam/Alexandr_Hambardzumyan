#include <iostream>
using namespace std;

int main () {
	
	int x;
	cout << "Enter the number \n";
	cin >> x;
	int y = x - 1;

	while (y > 0) {
		x = (x * y);
		y--;
	}
	
	cout << "factorial = " << x << endl; 

	return 0;
}

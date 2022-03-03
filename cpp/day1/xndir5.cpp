#include <iostream>
using namespace std;

int main () {

	float x, y;
	cout << "Enter the first edge of rectangle \n";
	cin >> x;
	cout << "Enter the second edge of rectangle \n";
	cin >> y;

	float P, S;
	P = (x + y) * 2;
	S = (x * y);

	cout << "Perimeter = " << P <<endl << "Area = " << S <<endl;

	return 0;
	
	
}

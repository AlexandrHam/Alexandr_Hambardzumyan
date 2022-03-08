#include <iostream>
using namespace std;

float Per (float a, float b) {

	return (a + b) * 2;
	 
}

float Area (float a, float b) {

	return  a * b;

}

int main () {

	float x, y;
	cout << "Enter the first edge of rectangle \n";
	cin >> x;
	cout << "Enter the second edge of rectangle \n";
	cin >> y;

	float P = Per (x, y);
	float S = Area (x, y);

	cout << "Perimeter = " << P <<endl << "Area = " << S <<endl;

	return 0;	
	
}

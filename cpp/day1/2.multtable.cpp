#include <iostream>
using namespace std;

int main () {
	
	int x;
	int y = 1;
	cout << "Enter the number \n";
	cin >> x;
	while (y < 11) { 
		cout << y << " * " << x << " = " << (y*x) << endl;
		y++;
	}
	return 0;
}

#include <iostream>
using namespace std;

void mult (int x) {
	
	int y = 1;
	while (y < 11) { 
		cout << y << " * " << x << " = " << (y*x) << endl;
		y++;
	}
}

int main() {
	
	int z;
	cout << "Enter the number \n";
	cin >> z;
	mult(z);

	return 0;
}

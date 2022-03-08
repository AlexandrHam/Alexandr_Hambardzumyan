#include <iostream>
using namespace std;

int fact (int a) {

	if (a > 0) {
		return a * fact (a - 1);
	}
	else {
		return 1;
	}
}

int main () {
	
	int x;
	cout << "Enter the number \n";
	cin >> x;
	
	int f = fact (x);

	cout << "factorial = " << f << endl; 

	return 0;
}

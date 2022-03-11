#include <iostream>
using namespace std;

int main () {
	
	int n;
	cout << "Enter the number \n";
	cin >> n;
	while (n < 0) {
		cout << "Only բնա կա ն numbers \n";
		cin >> n;
	}
	
	int k = 0, t = 1;
    	while (n >= 1) {
		if (n % 2 == 1) {
        		k = k + (n % 2) * t;
		}
        	t = t * 10;
        	n = n / 2;
	}
	cout << k << endl;
    	
    return 0;
}


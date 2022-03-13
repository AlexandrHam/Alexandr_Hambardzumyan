#include <iostream>
#include <cstring>
using namespace std;

int main () {

	int s = 50, B = 0, n = 0;
	char text[s];
	cout << "Enter words: \n";
	cin.getline(text, s);

	for (int i = 0; i < s; i++ ) {
		if (text[i] == 66) {
			B++ ;
		}
		if (text[i] == 32) {
			if (B > 1 && B < 3) {
				n++;
			}
			B = 0;
		}
	}	
	if (B > 1 && B < 3) {
		n++;
	}
	
	cout << "Count: " << n << endl;

	return 0;
}

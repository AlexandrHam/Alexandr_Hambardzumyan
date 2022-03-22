#include <iostream>
using namespace std;

int main () {

	char A[2], B[2], C[2], D[2];
	cout << "Input x, y \n";
	cin >> A[0] >> A[1];
	cin >> B[0] >> B[1];
	cin >> C[0] >> C[1];
	cin >> D[0] >> D[1];

	if (A[0] == B[0] && A[1] != B[1]) {
		if (C[0] != D[0] && C[1] == D[1]) {
			cout << "Yes \n";
		}
		else {
			cout << "No \n";
		}
	}
	else if (A[1] == B[1] && A[0] != B[0]) {
		if (C[1] != D[1] && C[0] == D[0]) {
			cout << "Yes \n";
		}
		else {
			cout << "No \n";
		}
	}
	else {
		cout << "No \n";
	}	
		
	return 0; 
}


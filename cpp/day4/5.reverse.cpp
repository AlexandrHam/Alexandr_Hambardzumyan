#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main () {

	int n;
	cout << "Enter the size of array \n";
	cin >> n;
	while (n < 1) {
		cout << "Only բնա կա ն numbers \n";
		cin >> n;
	}
	int arr [n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand () % 100;
		cout << arr [i] << ", ";
	}
	cout << endl;

	for (int i = 0, j = (n - 1); i < n/2; i++, j--) {
			int m = arr[i];
			arr [i] = arr [j];
			arr [j] = m; 
		}
	for (int i = 0; i < n; i++) {
		cout << arr [i] << ", ";
	}
	cout << endl;

	return 0;
}

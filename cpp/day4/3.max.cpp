#include <iostream>
#include <cstdlib>
#include <ctime>
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
	for (int i = 0; i <= n; i++) {
		arr[i] = rand () % 10;
	}
	for (int j = 0; j <= n; j++) {
		cout << arr[j] << ", ";
	}
	cout << endl;
	int m;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j <= n; j++)
		if (arr[i] > arr[j]) {
			m = arr[i];
			arr [i] = arr [j];
			arr [j] = m;			
		}
	}
	cout << arr[n] <<endl;

	return 0;
}

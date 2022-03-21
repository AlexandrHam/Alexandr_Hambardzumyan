#include <iostream>
using namespace std;

int main () {

	int n, a, b, t1, t2;
	cout << "how many numbers you want to input? ";
	cin >> n;

	int arr[n] = {0};
	cout << "Input numbers: ";

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}

	cout << endl << "Input positions to swap: ";
	cin >> a >> b;
	while (a > n || b > n) {
		cout << "Input positions only under " << n << ": ";
		cin >> a >> b;
	}

	int tmp = arr[a - 1];
	arr [a - 1] = arr[b - 1];
	arr[b - 1] = tmp;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;


	return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
	int n, m;
	cout << "size of array \n";
	cin >> n;
	cout << "size of array \n";
	cin >> m;
	int arr[n][m];
       	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr [i][j] = rand () % 10;
			cout << arr [i][j] << " ";
		}
		cout << endl;
	}
	int x1 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i != j) {
				cout << arr[i][j] << " ";
				x1 = x1 + arr [i][j];
			}
			else {
				break;
			}
		}
		cout << endl;
	} 

	cout << endl << "first triangle: " << x1 << endl;

	int x2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = m-1; j >= 0; j--) {
			if (i != j) {
				cout << arr[i][j] << " ";
				x2 += arr [i][j];
			}
			else {
				break;
			}
		}
		cout << endl;
	}

	cout << "second triangle: " << x2 << endl;

	int x3 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--) {
			if (i != m - 1 - j) {
				cout << arr[i][j] << " ";
				x3 += arr[i][j];
			}
			else {
				break;
			}
		}
		cout << endl;
	}
	cout << endl << "third triangle: " << x3 <<endl;

	int x4 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i != m - j - 1) {
				cout << arr[i][j] << " ";
				x4 += arr[i][j];
			}
			else {
				break;
			}
		}
		cout << endl;
	}
	cout << endl << "forth triangle: " << x4 << endl;

	int x5 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i != j && i != m - 1 - j) {
				cout << arr [i][j] << " ";
				x5 += arr[i][j];
			}
			else {
				break;
			}
		}
		cout << endl;
	}
	cout << endl << "fifth triangle: " << x5 << endl;

	int x6 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--) {
			if (i != j && i != m - 1 - j) {
				cout << arr [i][j] << " ";
				x6 += arr[i][j];
			}
			else {
				break;
			}
		}
		cout << endl;
	}
	cout << endl << "sixth triangle: " << x6 << endl;

	for (int i = 0; i < n; i++){
		for (int j = 1; j < m; j++) {
			if (i != j && i != m - 1 - j) {
				cout << arr [i][j] << " ";
			}
			else {
				break;
			}
		}
		cout << endl;
		i++;
	}

	return 0;

}


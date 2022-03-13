#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
	
	int i, j;
	int arr[5][5];
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			arr[i][j] = rand () % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int min = 10, max = -1;
	for (i = 0; i < 5; i++) {
                for (j = 0; j < 5; j++) {
			 if (arr[i][j] >= max) {
			 	max = arr[i][j];
			 } 
			 if (arr[i][j] <= min) {
			 	min = arr[i][j];
			 }
		}
		for (j = 0; j < 5; j++) {
			if (arr[i][j] == max) {
				arr [i][j] = min;
			}
			else if (arr[i][j] == min) {
				arr[i][j] = max;
			}
			 cout << arr[i][j] << " ";
		}
		cout << endl;
		max = -1;
		min = 10;
	}
	return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
srand (time(NULL));
	int i, j, x = 0, y = 0, s = 4;
	int arr1[s][s], arr2[s][s], brr[s][s];
	for (i = 0; i < s; i++) {
		for (j = 0; j < s; j++) {
			arr1[i][j] = rand () % 10;
			cout << arr1[i][j] << " ";
			x++;
			if (x == 4) {
				cout << "       ";
				x = 0;
			}
		}
		for (j = 0; j < s; j++) {
			arr2[i][j] = rand () % 10;
			cout << arr2[i][j] << " ";
			y++;
			if (y == 4) {
                                cout << "       ";
                                y = 0;
                        }

		}
		for (j = 0; j < s; j++) {
			brr [i][j] = arr1[i][j] + arr2[i][j];
			cout << brr[i][j] << " ";
		}
		cout << endl; 
	}

	return 0;
}

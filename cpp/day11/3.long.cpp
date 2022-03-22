#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
	
	srand (time(NULL));
	int arr[20], i, pos, cnt = 0, largestcnt = 0;
	for (i = 0; i < 20; i++) {
		arr[i] = rand() % 100 - 50;
		cout << arr[i] << ", ";
		if (i > 0) {
			if (arr[i] > arr[i - 1]) {
				cnt++;
				if (cnt > largestcnt) {
					largestcnt = cnt;
					pos = i;
				}
			}
			else {
				cnt = 0;
			}
		}
	}
	cout << endl;
	
	for (i = pos - largestcnt; i <= pos; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;

	return 0;
}

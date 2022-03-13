#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int arr[10];
	int x = -1, k, z;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 1000; j += 5) {
			for (int a = 2; a < 100; a++){
				for (int b = 2; b < 100; b++) {
					if (j == pow(a, 2) + pow(b, 2)) {
						arr[i] = j;
						if (i == 0) {
							x++;
							k = a;
							z = b;
							break;
						}
						else {
							if (arr[i] > arr[i-1]) {
								x++;
								k = a;
								z = b;
								break;
							}
						}
					}
				}
				if (x == i) {
					break;
				} 
			}
			if (x == i) {
				break;
			}	
		}
		cout << arr [i] << "(" << k << ", " << z << ")" << endl;
	}

	return 0;
} 

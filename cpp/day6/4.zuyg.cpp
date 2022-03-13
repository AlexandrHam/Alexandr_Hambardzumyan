#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

	int i, j, k, s1 = 10, s2 = 5, n = 1, m = 0;
	int arr[s1][s2];
	for (i = 0; i < s1; i++) {
		cout << "N:" << n << " - ";
	       	n++;	
		for (j = 0; j < s2; j++) {
			arr[i][j] = rand() % 90 + 10;
			cout << arr[i][j] << " ";
			if (arr[i][j] % 2 == 0) {
                              m++;
                     }
                        if (m == s2) {
                         	cout << "<- There ";
			 	k = n - 1;	
			}
		}
		cout << endl;
		m = 0;
	}
	cout << endl << "Araji zuygerov toxy hamar " << k << "-n e" << endl;
	
	return 0;
}



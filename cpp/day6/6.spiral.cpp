#include <iostream>
using namespace std;

int main () {

	int i, j, s = 4,
	    top = 0,
	    bottom = s -1,
	    left = 0,
	    right = s - 1,
	    index = 1;

       	int arr[s][s];
	while (1) {
		if (left > right) {
			break;
		}
		for (i = left; i <= right; i++) {
			arr[top][i] = index++;
		}
			top++;		
		if (top > bottom) {
			break;
		}
			
		for (i = top; i <= bottom; i++) {
			arr[i][right] = index++;
		}
		right--;
		if (right < left) {
			break;
		}

		
		for (i = right; i >= left; i--) {
			arr[bottom][i] = index++;
		}
		bottom--;
		if (bottom < top) {
			break;
		}
		
		for (i = bottom; i >= top; i--) {
			arr[i][left] = index++;
		}
		left++;
	       	if (left > bottom) {
			break;
		}	
		
	}

	for (i = 0; i < s; i++) {
		for (j = 0; j < s; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

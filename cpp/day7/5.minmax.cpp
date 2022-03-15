#include <iostream>
using namespace std;

void maxmin(int arr[], int *min, int *max, int size) {
	
	for (int *ptr = arr + 1; ptr != arr + size; ptr++) {
		if(*min > *ptr) {
			*min = *ptr;
		}
		if(*max < *ptr) {
			*max = *ptr;
		}
	}

}

int main () {
	
	int min, max;
	int size = 5;
	int arr[size] = {1, -1, 5, 10, 3};
	min = arr[0];
	max = arr[0];
	maxmin(arr, &min, &max, size);
	cout << min << " " << max <<endl;

	return 0;
}

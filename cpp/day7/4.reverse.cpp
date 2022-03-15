#include <iostream>
using namespace std;

int reverse (int arr[], int size) {

	for (int *ptr = arr; ptr != arr + size; ptr++){
	       	*ptr = (arr + 5) - ptr;
	}
	return *arr;
	
}

int main () {

	int arr[5] = {1, 2, 3, 4, 5};
	arr[5] = reverse (arr, 5);
	for (int i = 0; i < sizeof(*arr) + 1; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}

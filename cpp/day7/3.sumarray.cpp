#include <iostream>
using namespace std;


int sumarr (int arr[]) {
	int sum = 0;	
	int* end = arr + 5;
	for (int *ptr = arr; ptr != end; ptr++) {
		sum += *ptr;
	}

	return sum;

}

int main () {
	int arr[5] = {15, 5, 8, 84, 8};
	int sum =  sumarr (arr);
	cout << sum << endl;
	
	return 0;
}

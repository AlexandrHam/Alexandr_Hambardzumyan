#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
       	*a = *b;
	*b = tmp;	
}

int main () {

	int a = 1, b, temp;
	cout << "Enter a and b numbers: \n";
	cin >> a;
	cin >> b;
	swap(&a, &b);
      	cout << a << ' ' << b << endl;	

	return 0;
}

#include <iostream>
using namespace std;

void sum1(int* a, int *b, int *sum) {
	*sum = *a + *b;
}

void sum2(int &a, int &b, int &sum) {
	sum = a + b;
}

void sum3 (int a, int b, int &sum) {
	sum = a + b;
}

void sum4 (int a, int *b, int &sum) {
	sum = a + *b;
}

void sum5 (int *a, int *b, int &sum) {
	sum = *a + *b;
}

int main () {

	int a = 1, b = 2, sum = 0;
	sum1 (&a, &b, &sum);
	cout << sum << endl;

	sum2(a, b, sum);
	cout << sum << endl;

	sum3(a, b, sum);
	cout << sum << endl;

	sum4(a, &b, sum);
	cout << sum << endl;

	sum5(&a, &b, sum);
	cout << sum << endl;

	return 0;
}

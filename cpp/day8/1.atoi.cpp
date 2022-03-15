#include <iostream>
#include "mylib.h"
using namespace std;

int main () {

	int x = 5, y = 2;
	int count = *sum(x, y);
	cout << count << endl;

	return 0;
}

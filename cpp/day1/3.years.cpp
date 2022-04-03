#include <iostream>
using namespace std;

int main () {
	
	int year = 2024, count = 0;
	while (count < 20) {
		cout << year <<endl;
		year = (year + 4);
		count++;
	}
	return 0;
}

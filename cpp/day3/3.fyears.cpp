#include <iostream>
using namespace std;

void years () {
	
	int x = 2024, count = 0;
	while (count < 20) {
		cout << x <<endl;
		x = (x + 4);
		count++;
	}	
}

int main() {

	years();

	return 0;
}

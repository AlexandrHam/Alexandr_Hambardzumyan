#include <iostream>
#include <cstdlib>
using namespace std;


void game () {

	int x;
	int y;
	cout << "Enter the number \n";
	cin >> x;
	system("clear");
	cout << "Guess the number \n";
	do {
		cin >> y;
			if (y < x) {
				cout << "larger \n";
			}
			else if (y > x) {
				cout << "smaller \n";
			}
	}
	while (y != x);
	cout << "You guessed the number \n";
}

int main() {

	game();

	return 0;
}

#include <iostream>
using namespace std;
	
void legs (int a, int b, int c) {

	int leg = ((a * 2) + (b + c) * 4);
	cout << "You have " << leg << " legs of animal "<< endl;

}

int main () {

	int x, y, z;
	cout << "How many chikens do you have? \n";
	cin >> x;
	cout << "How many pigs do you have? \n";
	cin >> y;
	cout << "How many cows do you have? \n";
	cin >> z;

	legs (x, y, z);

	return 0;
}

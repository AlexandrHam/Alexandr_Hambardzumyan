#include <iostream>
using namespace std;
	
int main () {
	
	int x, y, z;
	cout << "How many chikens do you have? \n";
	cin >> x;
	cout << "How many pigs do you have? \n";
	cin >> y;
	cout << "How many cows do you have? \n";
	cin >> z;

	int legs = ((x*2)+(y+z)*4);
	cout << "You have " << legs << " legs of animal "<< endl;

	return 0;

}


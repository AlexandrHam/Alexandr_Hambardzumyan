#include <iostream>
using namespace std;
	
int main () {
	
	int chicken, pig, cow;
	cout << "How many chikens do you have? \n";
	cin >> chicken;
	cout << "How many pigs do you have? \n";
	cin >> pig;
	cout << "How many cows do you have? \n";
	cin >> cow;

	int legs = ((chicken * 2) + (pig + cow) * 4);
	cout << "You have " << legs << " legs of animal "<< endl;

	return 0;

}


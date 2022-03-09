#include <iostream>
using namespace std;

int kat (int n);

int main () {

	int n;
	cout << "Enter the number \n";
	cin >> n;
	while (n <= 0) {
		cout << "Only բնա կա ն numbers \n";
		cin >> n;
	}
	int x = kat (n);
	if ( x == 1){
		cout << "tivy kataryal e \n";
	}
	else {
		cout << "tivy kataryal che \n";
	}

	return 0;
}

int kat (int n) {
	int x = 1;
	for (int i = n - 1; i > 1; i--) {
		if (n % i == 0)
			x = 0;
	}
	return x;

}

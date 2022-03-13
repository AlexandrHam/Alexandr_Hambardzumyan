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
	int flag = kat (n);
	if ( flag == 1){
		cout << "tivy kataryal e \n";
	}
	else {
		cout << "tivy kataryal che \n";
	}

	return 0;
}

int kat (int n) {
	int y = 0, flag = 0;
	for (int i = n - 1; i > 0; i--) {
		if (n % i == 0) {
			y += i;
		}
	}
	if (y == n) {
	flag = 1;
	}
	return flag;

}

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Data {
	string country;
	string capital;
	string domain;
} data;

int main() {

	string search;
	cout << "Inut search mode (country / capital / domain) : ";
	cin >> search;
	if (search == "country") {
		cout << "Input country : ";
		cin >> data.country;
	}
	else if (search == "capital") {
		cout << "Input capital : ";
		cin >> data.capital;
	}
	else if (search == "domain") {
		cout << "Input domain : ";
		cin >> data.domain;
	}
	else {
		cout << "something wrong \n";
	}
	int str;
	ifstream file;
	file.open("countries.txt");
	if (file.is_open()) {
		getline(file, data.country);						
		
	}
	file.close();

	string arr[6];
	int x = 0;
	for (int i = 0; i < 60; i++) {
		if (data.country[i] == ',') {
			x++;
			continue;
		}
		arr[x] += data.country[i];

	} 
	cout << "Country : " << arr[0] << endl;
	cout << "Capital : " << arr[1] << endl;
	cout << "Domain : " << arr[2] << endl;
	cout << "Population : "	<< arr[3] << endl;
	cout << "Area : " << arr[4] << endl;
	cout << "GDP : " << arr[5] << endl;

	return 0;
}

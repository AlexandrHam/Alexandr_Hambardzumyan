#include <iostream>
#include <fstream>

using namespace std;

int main () {

	string sent; 
	cout << "enter sentence: ";
	getline (cin, sent);
	cout << sent << endl;
	
	int count = 1;

	for (int i = 0; i < sent.length(); i++) {
		if (sent[i] != ' ') {
			count++;
		}
	}
	
	string word[count];
	int n = 0, m = 0;

	ofstream f1;
	ifstream f2;
	f1.open("text.txt");
	f2.open("t9.txt");

	f1 << sent;

	
	f1.close();
	f2.close();
       		
	




	return 0;
}

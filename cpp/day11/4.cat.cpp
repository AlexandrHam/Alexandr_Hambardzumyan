#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void result (string word, int a, int b) {
	
	if (a == b) {
		cout << word << ",";
	}

	for (int i = a; i <= b; i++) {
		swap(word[a], word[i]);
		result(word, a + 1, b);
		swap(word[a], word[i]);
	}


}

int main () {

	string word;
	cout << "Input a word: ";
	cin >> word;
	int length = word.length();
	result(word, 0, length - 1);
	cout << endl;

	return 0;
}

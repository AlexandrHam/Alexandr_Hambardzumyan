#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string sentence = " ";
	cout << "Input a sentence: ";
	getline (cin, sentence);

	int count = 2;
	for (int i = 0; sentence[i] != '\0'; i++) {
		if (sentence[i] == ' ') {
			count++;
		}
	}
	
	string sentence_word [count];
	int x = 0;

	for (int i = 0; sentence[i] != '\0'; i++) {
		if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
			sentence[i] = sentence[i] + ('a' - 'A');
		}
		if (sentence[i] == ' ') {
			x++;
			continue;
		}
		sentence_word[x] += sentence[i];
	}

	ifstream dict ("dictionary.txt");
	string word = " ";
	int j = 0;

	while (dict >> word) {
		for (int i = 0; i < count; i++) {
			if (sentence_word[i].size() == word.size()) {
				for (int k = 0; k < sentence_word[i].size(); k++) {
					if (sentence_word[i][k] == word[k]) {
						j++;
						if (j == word.size() - 1) {
							sentence_word[i] = word;
						}
					}
				}
			}
			
		}
		j = 0;
	}
	dict.close();
	ofstream print ("corrected.txt");
	for (int i = 0; i < count; i++) {
		print << sentence_word[i] << " ";
		cout << sentence_word[i] << " ";
	}
	print.close();
	cout << endl;

	return 0;

}

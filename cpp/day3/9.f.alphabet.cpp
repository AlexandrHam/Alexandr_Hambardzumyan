
  
#include <iostream>
#include <string>
using namespace std;

char vowel (char a) {

	cout << "'" << a << "'" << " is vowel \n";
	return a;
}

char consonant (char a) {

	cout <<  "'" << a << "' " << "is consonant \n";
	return a;
}

int main () {

	char letter;
	cout << "Input the letter \n";
	cin >> letter;
	if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122)) {
		switch (letter) {
	  		case ('a'):
	  		case ('e'):
	 		case ('i'):
	 		case ('o'):
	  		case ('u'):
	  		case ('A'):
	  		case ('E'):
	  		case ('I'):
	  		case ('O'):
	  		case ('U'):	  
 	    			vowel (letter);
	    		break;
	  		case ('y'):
	  		case ('Y'):
	    			cout << "'" << letter << "'" << " can be and vowel and consonant \n";
            		break;
	  		default:
				consonant (letter);			
		}
	}
	else {
		cout << "That is not a letter \n";
	}	
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main () {

	char letter;
	cout << "Input the letter \n";
	cin >> letter;

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
 	    cout << "'" << letter << "' " << "is vowel \n";
	    break;
	  case ('b'):
	  case ('c'):
	  case ('d'):
	  case ('f'):
	  case ('g'):
	  case ('h'):
	  case ('j'):
	  case ('k'):
	  case ('l'):
	  case ('m'):
	  case ('n'):
	  case ('p'):
	  case ('q'):
	  case ('r'):
	  case ('s'):
	  case ('t'):
	  case ('v'):
	  case ('w'):
	  case ('x'):
	  case ('z'):
	  case ('B'):
	  case ('C'):
	  case ('D'):
	  case ('F'):
	  case ('G'):
	  case ('H'):
	  case ('J'):
	  case ('K'):
	  case ('L'):
	  case ('M'):
	  case ('N'):
	  case ('P'):
	  case ('Q'):
	  case ('R'):
	  case ('S'):
	  case ('T'):
	  case ('V'):
	  case ('W'):
	  case ('X'):
	  case ('Z'):
	    cout << "'" << letter << "' " << "is consonant \n";
	    break;
	  case ('y'):
	  case ('Y'):
	    cout << "'" << letter << "'" << " can be and vowel and consonant \n";
            break;
	  default:
	    cout << "That is not a letter \n";

	}	  
	return 0;
}

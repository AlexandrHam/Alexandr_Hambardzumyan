#include <iostream>
#include <ctime>
using namespace std;

double tok (double mayr, double tokos);
char amis (char* date_time);

int main (int argc, char* argv[]) {

	time_t now = time(0);
	char* date_time = ctime(&now);
	int month = amis(date_time);
	char year[4];
	for (int i = 0; i < 4; i++) {
		year[i] = date_time[22 + i];
	}
	int tari = atoi(year);

	double mayr = atof(argv[1]);
	double tokos = atof(argv[2]);
	double amsekan;
	cout << "Skzbnakan gumar: " << mayr << " amd " << endl << "tari: " << tari << endl;
	for(int i = month; i < month + atof(argv[3]); i++) {
		amsekan = tok (mayr, tokos);
		mayr += amsekan;
		cout << i << " month: " << mayr << "amd = " << amsekan << endl;
		if (i == 12) {
			i = 0;
			month = month - 12;
			tari = tari + 1;
			cout << "Tari: " << tari << endl;;
		}
	}
	
	return 0;
}

double tok (double mayr, double tokos) {

	return mayr * ((tokos / 100) / 12);
}

char amis (char* date_time) {
	switch(date_time[4]) {
		case 'J': {
			if(date_time[5] == 'a') {
				return 1;
			}	
			else if (date_time[5] == 'u' && date_time[6] == 'n') {
				return 6;
			}
			else {
				return 7;
			}
		}
		case 'F': {
			return 2;
		}
		case 'M': {
			if (date_time[6] == 'r') {
				return 3;
			}
	      		else {
				return 5;
			}		
		}
		case 'A': {
			if (date_time[5] == 'p') {
				return 4;
			}	  
			else {
				return 8;
			}
		}
		case 'S': {
			return 9;
		}
		case 'O': {
			return 10;
		}
		case 'N': {
			return 11;
		}
		case 'D': {
			return 12;
		}
		default : {
			return 0;
		}
		
	}
	
}


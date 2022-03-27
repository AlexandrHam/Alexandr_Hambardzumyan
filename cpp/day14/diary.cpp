#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
 
struct Diary {
        string note;
        string date;
 
} diary;

/*string day(string date) {
	string y[3];
	int j = 0, x[3];
	for (int i = 0; i < date.size(); i++) {
		if (date[i] == '_') {
			j++;
			continue;
		}
		y[j] += date[i];	
	}
	for (int i = 0; i < 3; i++) {
		x[i] = stoi(y[i]);
	}
	
	for (int i = 0; i < )

}*/
 
int main() {
 	
	bool flag = true;
	while (flag) {

		
        	cout << "Input the date(dd_mm_yyyy): ";
       	 	cin >> diary.date;

        	cout << "Add note: ";

		ofstream note;
                note.open("./note/" + diary.date + ".txt", ios::app);

		ifstream book;
		book.open("./note/" + diary.date + ".txt");

		bool empty = (book.get(), book.eof());
		book.close();
	
		if (empty) {
			note << diary.date << endl;
		}
			
       		cin.ignore();	
                getline(cin, diary.note);

		note << diary.note << endl;
 
        	note.close();

		string command;
		cout << "Command: (add/exit) ";
		cin >> command;

		while (command != "add" && command != "exit") {
			cout << "Command: (add/exit) ";
			cin >> command;
		}
		if (command == "exit") {
			flag = false;
		}
 	}

	

 
        return 0;
}  

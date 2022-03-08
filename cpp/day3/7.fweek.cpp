#include <iostream>
using namespace std;

void week () {
	
	int day = 0;
	cout << "Enter the day of week \n";
	while (day < 1 || day > 7) {
		cin >> day;
	if (day < 1 || day > 7) {
		cout << "Only 1-7 \n";
	}
	}
	switch (day) {
  	  	case 1:
    	    		cout << "Monday \n";
            	break;
  	  	case 2:
    	    		cout << "Tuesday \n";
            	break;
          	case 3:
    	  		cout << "Wednesday \n";
    	  	break;
  	  	case 4:
    	    		cout << "Thursday \n";
    	    	break;
  	  	case 5:
    	    		cout << "Friday \n";
   	    	break;
  	  	case 6:
    	    		cout << "Saturday \n";
    	    	break;
  	  	case 7:
    	    		cout << "Sunday \n";
    	    	break;
    	}

}

int main () {
	
	week();

	return 0;
}

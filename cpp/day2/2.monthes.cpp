#include <iostream>
using namespace std;

int main () {
	
	int month;
	int y = 0;
	cout << "input month number \n";
	cin >> month;
        switch (month) {
		case 1:
	    		y = 31;
	    	break;
	  	case 2:
	    		y = 28;
	    	break;
	  	case 3:
	    		y = 31;
	    	break;
	  	case 4:
	    		y = 30;
	    	break;
	  	case 5:
	    		y = 31;
	    	break;
	  	case 6:
	    		y = 30;
	    	break;
	  	case 7:
	    		y = 31;
	    	break;
	  	case 8:
	    		y = 31;
	    	break;
	  	case 9:
	    		y = 30;
	    	break;
	  	case 10:
	    		y = 31;
	    	break;
	  	case 11:
	    		y = 30;
	    	break;
	  	case 12:
	    		y = 31;
	    	break;
	  	default:
	    		cout << "No souch month \n";
	}
	if (y == 28) {
	 	 cout << "Total number of days = 28 or 29 \n";
	} 
	else if (y > 0) {
	 	 cout << "Total number of days = " << y << endl;
	}
	return 0;
}

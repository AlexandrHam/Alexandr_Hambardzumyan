#include <iostream>
using namespace std;

int main () {

	int type;
	cout << "Enter the type of christmass tree (1-3) \n";
	cin >> type;

	switch (type) {
	  	case 1: {
	    		int x;
	    		int y = 0;
	    		cout << "Enter height of christmass tree \n";
	    		cin >> x;
	    		while (y < x) {
	      			int z = 0;
	      			while (z <= y) {
	        			cout << "*";
					z++;
	      			}
	      			cout << endl;
	      			y++;
	    		}
 	  	}
	  	break;

	  	case 2: {
	    		int k;
	    		cout << "Enter height of christmass tree \n";
	    		cin >> k;
	    		int j = 0;
	    		int l = 0;
	    		int m = 0;
	    		while (l < k) {
	      			while (m <= k) { 
	        			if (k > j) {
	          				cout << " ";
	        			}
	        			else {
	          				cout << "*";
	        			}  
	        			j++;
					m++;
	      			}
	      			l++;
	      			j = (k - (k -l));
	      			m = 0;
	      			cout << endl;
	    		}
	  	}
	  	break;

	  	case 3: {    	
	    		int a;
	    		cout << "Enter height of christmass tree \n";
 	    		cin >> a;
	
	    		while (a > 0) {
	      			for (int i = 0; i < a; i++) {
	        			cout << "*";
	      			}
	      			a--;
	      			cout << endl;
	    		}
 	  	}
	      	break;
	  	default:
	    		cout << "only 1-3 try again \n";
	}		
	
	return 0;

}



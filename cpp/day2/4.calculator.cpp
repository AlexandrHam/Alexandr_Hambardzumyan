#include <iostream>
using namespace std;

int main () {

	double a, b;
	char x;
	cout << "Input number \n";
	cin >> a;
	cout << "Input operator \n";
	cin >> x;
	cout << "Input number \n";
	cin >> b;
	switch (x) {
	  	case '+': 
	    		cout << a << x << b << " = " << a + b << endl;
	    	break;
	  	case '-':
	    		cout << a << x << b << " = " << a - b << endl;
	    	break;
	  	case '*':
	    		cout << a << x << b << " = " << a * b << endl;
	    	break;
	  	case '/':
	    		if (b == 0) {
	      			cout << "cant devide to 0 \n";
	    		}
	    		else {
	    			cout << a << x << b << " = " << a / b << endl;
	    		}
	    	break;
	  	default:
	    		cout << "Wrong operator \n";
	}

 	return 0;
}

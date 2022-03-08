#include <iostream>
using namespace std;

double pl (double a, double b){

	cout << a << "+" << b << " = " << a + b << endl;
	return 0;
}

double mi (double a, double b) {

	cout << a << " - " << b << " = " << a - b << endl;
	return 0;
}

double mu (double a, double b) {

	cout << a << " * " << b << " = " << a * b << endl;
	return 0;
}

double de (double a, double b) {
	
	cout << a << " / " << b << " = " << a / b << endl;

	return 0;
}

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
	    		pl (a, b);
	    	break;
	  	case '-':
	    		mi (a, b);
	    	break;
	  	case '*':
	    		mu (a, b);
	    	break;
	  	case '/':
	    		if (b == 0) {
	      			cout << "cant devide to 0 \n";
	    		}
	    		else {
	    			de (a, b);
	    		}
	    	break;
	  	default:
	    		cout << "Wrong operator \n";
	}

 	return 0;
}

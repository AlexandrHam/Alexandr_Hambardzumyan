#include <iostream>
#include "mylib.h"
using namespace std;

int my_atoi (char* a) {
	
	int i, result = 0;
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			result = result * 10 + (a[i] - '0');
		}
		else {
			result = 0;
		}
	}
	if(a[0] == '-') {
		result = result - result * 2;
	}
	return result;

}





#include <iostream>
#include <cstring>
using namespace std;
	
int main(){
	char string[20];
    	int i, length;
    	int flag = 0;
    
    	cout << "Enter a string: "; cin >> string;
    
    	length = strlen(string);

	for (i = 0; i <= length; i++) {
		if (string[i] >= 65 && string[i] <= 90) {
			string [i] = string [i] + ('a' - 'A'); 
		}
	}
    
    	for(i=0;i < length ;i++){
    		if(string[i] != string[length-i-1]){
        		flag = 1;
        		break;
   		}
	}
    
    	if (flag) {
        	cout << "Your word is not a palindrome" << endl; 
    	}    
   	else {
        	cout << "Your word is a palindrome" << endl; 
    	}
    	return 0;
}


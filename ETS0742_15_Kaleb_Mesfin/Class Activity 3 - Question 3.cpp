// This program changes capital letters to small ones and vise versa
#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
	
	char a;
	
	cout << "Enter a letter: ";
	cin >> a;
	
	if (isupper(a)){
		a = tolower(a);
		cout << a << endl;
	}
	
	else if (islower(a)){
		a = toupper (a);
		cout << a << endl;
	}
	
	else {
		cout << "That is not a letter." << endl;
	}
		
	return 0;

}

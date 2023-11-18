// This program calculates the power of numbers you enter
#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	double x, y;
	
	cout << "Enter the base: ";
	cin >> x;
	
	cout << "Enter the exponent: ";
	cin >> y;
	
	cout << "The result of the expression: " << pow (x, y) << endl;
	
	return 0;

}

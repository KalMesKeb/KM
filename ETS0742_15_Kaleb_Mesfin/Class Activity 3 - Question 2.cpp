// This program calculates the maximum number of miles your car can go without refueling 
#include <iostream>

using namespace std;

int main(){
	
	float Capacity, MPG;
	
	cout << "Enter your car\'s fuel tank capacity in gallons: ";
	cin >> Capacity;
	
	cout << "Enter your car\'s travel distance per each gallon in miles: ";
	cin >> MPG;
	
	cout << "You can drive your car " << Capacity * MPG << " miles without refueling." << endl;
	
	return 0;
	
}

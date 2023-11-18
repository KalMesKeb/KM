// This Program calculates your BMI
#include <iostream>

using namespace std;

int main(){
	
	float Height, Weight;
	
	cout << "Enter your height in meters: ";
	cin >> Height;
	
	cout << "Enter your weight in kilograms: ";
	cin >> Weight;
	
	cout << "Your BMI is: " << Weight / (Height * Height) << endl;
	
	return 0;
	
}

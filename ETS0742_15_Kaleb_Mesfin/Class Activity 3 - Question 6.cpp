// This program calculates the amount of time it will take to read a file of certain siez
#include <iostream>

using namespace std;

int main (){
	float num;
	cout << "Enter the size of your file in bytes: ";
	cin >> num;
	
	cout << "The amount of time it will take would be: " << num / (sizeof(char) * 960) << " second(s)." << endl;
	return 0;
}

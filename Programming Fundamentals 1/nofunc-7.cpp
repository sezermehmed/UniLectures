/* nofunc-7.cpp :
						>> (No Function) <<
	Write C program to perform the following tasks:
Given as input a floating (real) number of centimeters, print out the equvialent number of
feet (integer) and inches (floating, 1 decimal), with the inches given to an accuracy of
one decimal place.  ASSUME 2.54 centimeters per inch, and 12 inches per foot.
If the input value is 333.3, the output format should be:
333.3 centimeters is 10 feet 11.2 inches.
*/
#include <iostream>
using namespace std;
int main()
{
	float centimeters, inches, feet;
	cout << "Enter Centimeters value:  ";
	cin >> centimeters;
	inches = centimeters / 2.54;
	feet = inches / 12;
	cout << centimeters << " centimeters is " << int(feet) << "  feet " << inches << "  inches.";
	return 0;
}
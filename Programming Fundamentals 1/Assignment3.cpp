// Purpose of this program, 10 numbers in array, output the numbers between (100;500),
// total sum of them, avarage of them and is there 157 ? 
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	cout.precision(2);
	int array[10];
	int total(0), one_five_seven(0), i(0),counter(0);
	cout << ">> Give random 10 numbers in your mind:  "<< endl;
	for (i; i < (sizeof(array) / sizeof(array[0])); i++) {
		cin >> array[i];
		if (!cin) { cout << " :( Cin failed to read your input. Is it an integer? Exiting...\n"; exit(1); }
		else if (array[i] >= 100 && array[i] <= 500) {
			total += array[i]; counter++;
			if (array[i] == 157) {
				one_five_seven++;
			} 
		}
	}
	cout << "\t ~~~ Outputs ~~~" << endl;
	cout << " Sum of Numbers between 100 and 500: " << total << endl;
	cout << " Avarage of Numbers between 100 and 500: " << fixed << double(total) / counter << endl;
	cout << " Number of 157's : " << one_five_seven << endl;
	exit(0);
}
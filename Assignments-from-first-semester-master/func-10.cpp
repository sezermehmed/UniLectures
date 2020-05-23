/*func-10.cpp :
			>> (Funciton) <<
define one integer array, 15 elements long, called array1.
Write program, which count the number of elements, divisible of 2, 5 and 3.

*/
#include <iostream>
using namespace std;
void input(int array1[])
{
	cout << ">> Enter 15 numbers\n";
	for (int i = 0; i < 15; i++)
	{
		cin >> array1[i];
	}
}
void divisible(int array1[]) {
	int i = 0; int divisibles = 0;
	while (array1[i])
	{
		if ((array1[i] % 2 == 0 && array1[i] % 5 == 0) && (array1[i] % 3 == 0))
		{
			divisibles++;
			i++;
		}
		else  i++;
	}
	cout << ">> Number of elements that divisible of 2,5 and 3 :  " << divisibles;
}
int main()
{
	int array1[15];
	input(array1);
	divisible(array1);
	return 0;
}
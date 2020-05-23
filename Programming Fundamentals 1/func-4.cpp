/* function-4.cpp :
						>> (Funciton) <<
		define one integer array, 10 elements long, called array1.
		Write program, which solve the sum of all elements that values are beetween 4 and 200
*/
#include <iostream>
using namespace std;
void input(int array1[])
{
	cout << ">> Enter 10 numbers\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> array1[i];
	}
}
void sumof(int array1[]) {
	int i = 0; int sumof = 0;
	while (array1[i])
	{
		if (array1[i] >= 4 && array1[i] <= 200)
		{
			sumof += array1[i]; i++;
		}
		else i++;
	}
	cout << ">> Sum of numbers beetween 4 and 200:  " << sumof;
}
int main()
{
	int array1[10];
	input(array1);
	sumof(array1);
	return 0;
}
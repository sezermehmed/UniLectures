/*func-7.cpp :
			>> (Funciton) <<
	Write a program to store the numbers from 1 to 100 in an array of 100 integer elements.
	Find the number of all elements that divided to 5.
	*/
#include <iostream>
using namespace std;
void storing(int array1[])
{
	int i(0);
	for (i; i < 100; i++)
	{
		array1[i] = i + 1;
	}
}
void divisible(int array1[])
{
	int divisibles(0);
	for (int i = 0; i < 100; i++)
	{
		if (array1[i] % 5 == 0)
		{
			divisibles++;
		}
	}
	cout << divisibles;
}
int main()
{
	int array1[100];
	storing(array1);
	divisible(array1);
	return 0;
}
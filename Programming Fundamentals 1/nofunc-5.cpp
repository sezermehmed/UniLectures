/* nofunc-5.cpp :
						>> (Without Function) <<
	Write C program to perform the following tasks:
Write a program to print several lines (such as your name and address).
You may use either several printf instructions (or cout), 
each with a new line character in it,
or one printf (cout) with several new lines in the string.
 */
#include <iostream>
using namespace std;
int main()
{
	string name = "Sezer", surname="Mehmed";
	cout << "My Name is " << name << endl << "My Surname is " << surname << endl;
	printf("I am living in Varna, \n\tI am learning C++\n\n");
	/// This is extra code that prints "VARNA" with symbol '*'
	cout << "*     *   *    *****  *     *	  *\n *   *   * *   *  *   * *   *    * *\n  * *   * * *  * *    *   * *   * * *\n   *   *     * *   *  *     *  *     * " << endl;
	string x = "10", y = "0";
	cout << endl << endl <<  x + y << endl;
	return 0;
}

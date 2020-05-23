#include <iostream>
using namespace std;
//definition of function with name swap_ab -witch change two integers;;
void
swap_ab(int &a, int &b)
{
		int buf = a;
			a = b;
			b = buf;
}
//definition of function with name sort_abc -witch sort tree values
void sort_abc(int &a, int &b,int &c)
{
	if (a > b)
		swap_ab(a, b);
	if (b > c)
		swap_ab(b, c);
	if (a > c)
		swap_ab(a, c);
}
void main()
{
//enter 3 values from Kbr
	int x, y, z;
	cout << "\nx"; cin >> x;
	cout << "\ny"; cin >> y;
	cout << "\nz"; cin >> z;
//call function about sorting 
	sort_abc(x, y, z);
//the result is in same variables x,y,z
	cout << "\n Result: " << x << "\t" << y << "\t" << z;
	system("pause");
}


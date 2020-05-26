// Make a recursive function for calculating values of Hermit's polynomials
#include <iostream>
using namespace std;
int H(int x, int n)
{
if(n == 0) 
	return 1;
else if(n == 1)
	return 2 * x;
else if(n > 1)
	return 2 * x * H(x, n - 1) - 2 * (n - 1) * H(x, n - 2);
else 	return 0;
}
int main() 
{
	int n, x;
	cout << "Enter N: "; cin >> n; cout << endl;
	cout << "Enter X: "; cin >> x; cout << endl;
	cout << H(x, n) << endl;
return 0;
}

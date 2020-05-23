// lab 3 (NOT ALL OF THEM) 
// 1.1 - Recursive Implementation
/*
#include <iostream>
using namespace std;
long factorial(long n); //prototype
int main()
{
	long n;
	cout << "\nInput the integer:";
	cin >> n;
	cout << "\n" << "! = " << factorial(n);
	return 0;
}
long factorial(long k)
{
	if (k > 0)
		return(k * factorial(k - 1));
	else
		return(1);
}
*/

/// The Greatest common divisor - 3

/*#include <iostream>
using namespace std;
int NGOD (int m, int n); //Prototype
void main()
{
int m, n;
char r;
do
{
	do
	{
		cout << "\n m=";
		cin >> m;
		cout << "\n n=";
		cin >> n;
	}while((n < 0) || (m < 0));
	cout << "\nNOD ("<<m<<","<<n<<")=" << NGOD(m, n);
	cout << "\nNext arguments (y/n):";
	cin >> r;
}while((r=='y') || (r=='Y'));
}
int NGOD (int m, int n)
{
	if(n == 0)
		return m;
	if(n > m)
		return NGOD(n,m);

		return NGOD(n, m % n);
}
*/
/*

// Arithmetic progression - 4

#include <iostream>
using namespace std;
int b, c; // Global variable
void prog (int n)
{
	if (n + b  <= c)
		prog(n + b);
	cout << n << "\t";
}
int main ()
{
int a;
cout << "\na = "; cin >> a;
cout << "\nb = "; cin >> b;
cout << "\nc = "; cin >> c;
prog(a);
return 0;
}
*/
/*

// Find the maximum valie in array

#include <iostream>
using namespace std;
const int N = 10;
int a[N]; //global array
int max_i(); //prototype of iterative implemantation
int max_v(int l, int r); //prototype of recursive implemantation with 2 input parameters - left and right range
int main()
{
//int n;
for(int i = 0; i < N; i++)
{
	cout << "\nInput the integer: ";
	cin >> a[i];
}
cout << "\n From iterative implementation\n";
cout << "\n The maximum value is: " << max_i();
cout << "\n From recursive implementation \n";
cout << "\n The maximum value is: " << max_v(0 ,N-1)<<endl;
system("pause");
}
int max_i()
{
int max = a[0]; //maximum is 1-st value of array
for(int i = 1; i < N; i++)
{
	if (max < a[i])
		max = a[i];}
return max;

}
int max_v(int l, int r)
{
	if(a[l] == a[r]) return a[l];
	int m = (l + r) / 2; //find the middle of index
	int u = max_v(l, m); // find the maximum from right side of array
	int v = max_v(m + 1, r); // find the maximum from right side of array
	if (u > v)
		return u;
	else
		return v; // return the great value
}

*/

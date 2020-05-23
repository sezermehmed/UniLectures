#include <iostream>
using namespace std;
const int n = 5;
int a[n][n];
void printMatrix()
{
	cout << endl << "Matrix is: \n";
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
	}
}
void printMatrixMainDiagonal()
{
	cout << endl << "Matrix with 0 in main diagonal is: \n";
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
	}
	cout << endl;
}
int main()
{ 
	//definiton of matrix
	int  i, j;
	//fill a matrix
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[j][i] = n - i;
		}
	}
	//print a matrix
	printMatrix();

	//set 0 on main diagonal
	for (i = 0; i < n; i++)
	{
		a[i][i] = 0;
	}
	//print a matrix
	printMatrixMainDiagonal();

	cout << endl;
	system("pause");
}

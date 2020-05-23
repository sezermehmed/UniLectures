#include <iostream>
using namespace std;
const int n = 5;
int a[n][n] = { 0 };

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

    //fill a matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            a[i][j] = n - j;
        }
    }
    //print a matrix
    printMatrix();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            a[i][j] = n - j;
        }
    }
    printMatrix();
}
    //set 0 on main diagonal
/*    for (i = 1; i < n; i++)
    {
     for(j = 1; j < n; j++) {
     a[i-j][j-1] = 0;
     //a[j-1][i-j] = 0;
     }*/



     //    a[i][i-2] = 0;
     //    a[i][i-3] = 0;
     //    a[i][i-4] = 0;
     //}
     //print a matrix
     //printMatrixMainDiagonal();
    /*
//int max_value(int x, int y);
//int sum_pr(int x, int y);

int sum_pr(int x, int y)
{
    if (x >= y)
    {
        cout << "a + b = ";
        return x + y;
    }
    else {
        cout << "a*b= ";
        return x * y;
    }
}
int max_value(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        if (x == y)
        {
            cout << "a=b";
            return x;
        }
        else {
            return y;
        }
    }
}
void main()
{
    int a, b, max, s;
    cout << "input values \n";
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    max = max_value(a, b);
    cout << max << "\n";
    s = sum_pr(a, b);
    cout << s << "\n";
    cout << endl;
    system("pause");
}
*/

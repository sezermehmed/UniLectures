#include <iostream>
using namespace std;
const int n = 5;
int a[n];
void printArray()
{
    cout << endl << "Array after invert is: ";
    for (int i = 0; i < n; i++)
    cout << a[i] << "\t";

    cout << endl << "Elements with odd indexes are: ";
    for (int i = 0; i < n; i += 2)
    cout << a[i] << "\t";

}
int main()
{
    //definition of array 
    int buf, i, j;
    //fill an array with odd values - 1 3 5 7 9 ....
    for (i = 0, j = 1; i < n; i++, j = j + 2)
        a[i] = j;
    //print an array 
    cout << endl << "Array is: ";
    for (i = 0; i < n; i++)
        cout << a[i] << "\t";
    //invert an array
    for (i = 0; i < n / 2; i++)
    {
        buf = a[i];
        a[i] = a[n - 1 - i]; 
        a[n - 1 - i] = buf;
    }
    //print an array
    printArray(); 
    /*
    cout << endl << "Array after invert is: ";
    for (i = 0; i < n; i++)
        cout << a[i] << "\t";
        */
    //print elements with odd indexes
    /*
    cout << endl << "Elements with odd indexes are: ";
    for (i = 0; i < n; i += 2)
        cout << a[i] << "\t";
        */
    cout << endl;
    system("pause");  
}


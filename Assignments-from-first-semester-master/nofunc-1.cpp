/* nofunc-1.cpp : 
                         >> (Without Function) <<
        Write C program to perform the following tasks:
    Input 2 numbers and work out their sum, avarage and sum of the squares of the numbers. 
    If the sum is greater than 100 print out "The sum is greater than 100"
    otherwise print out "the sum is less than 100". 
 */
#include <iostream>
using namespace std;
int main() 
{
    int num1, num2; cout.precision(1);
    cout << ">> Enter two numbers:" << endl;
    cin >> num1 >> num2;
    cout << "The Sum of the numbers:" << num1 + num2 << endl;
    cout << "Avarage of the numbers:" << fixed << (double(num1) + double(num2)) / 2 << endl;
    cout << "Sum of the squares of numbers:" << (num1*num1) + (num2*num2) << endl;
    if ((num1 + num2) > 100) {
        cout << "The sum is greater than 100." << endl;
    } else cout << "The sum is less than 100." << endl;
    return 0;
}
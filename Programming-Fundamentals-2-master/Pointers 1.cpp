// tennis player has max 50 competitions in 1 year.
// every time loses/wins amount of money.
// How much money he has at the end of year?
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
///////////// 1 ///////////
/*
int main() {
	float x[50], *px, *pend, sum=0;
	int i, k;
	do {
		cout << "\n How many competitions: ";
		cin >> k;
	} while(k < 1 || k > 50);
	for(i = 0; i < k; i++)
	{
		cout << "\n How much money wins/loses: ?";
		cin >> x[i];
	}
	px = x;
	pend = x + k;
	for(;px < pend; px++)

		sum += *px;
	cout << "\n Amount of money is: " << sum << endl;
	system("pause");
}
*/
///////////// 2 ////////////
// Pointers with strings. string = array of chars
/*
void  main () {
	char str2[] = "This is my string!";
	char *str1, *s1, *s2;
	int len = strlen(str2); //lenght of str2
	str1 = (char*) malloc(len + 1); // free place in memory pointed by str1
	s1 = str1;
	s2 = str2 + len; //s2 points the end of str1
	s2--;  //moves to the letter g
	while (s2 >= str2) //copy str2 to str1 in opposite order
		*s1++ = *s2--;
	*s1 = '\0';
	cout << "\n str1 = " << str1;
	cout << "\n str2 = " << str2;
	system("pause");
}
*/
////////////////  3  ////////////////
// Pointers to functions:
// create function, which make sum of 3 numbers
// and start it with a pointer to function
/*
int add(int x, int y, int z) {
return (x + y + z);
}
void main() {
int (*ptr)(int x, int y, int z);
ptr = add;
int x = 7, y = 10, z = 2;
cout << "\n start it by pointer: ";
cout << (*ptr)(x, y, z) << endl;
cout << "\n start it by name:";
cout << add(x, y, z) << endl;
system("pause");
}
*/
/////////// 4 ////////////
// Pointers as parameters of functions
//      type of functions
// a) functions which dont returns a value (void)
// b) functions which returns 1 value.
// c) functions which return 2, 3 and more results:
// d) functions which exchange arrays
// example: create function to calculate S = pi*R^2 and c = 2piR of circle
/*
#define PI 3.141592
void circle (float R, float *S, float *C)
{
*S = PI * R * R;
*C = 2* PI * R;
}
void main()
{
float a, b, d;
do {
cout << "\n Enter radius: ";
cin >> a;
circle(a, &b, &d);
cout << "\n Area is = " << b;
cout << "\n circumference = " << d;
} while(a != 0);
system("pause");
}
*/
//// example 2 //////
// input is a real number split to sign integer and float ports
// -3.56  = > '-' '3' '.56'
#include <cmath>
void split(float a, char* s, int* w, float* f)
{
	float absval;
	if (a > 0) *s = '+';
	else if (a == 0) *s = ' ';
	else *s = '-';
	absval = fabs(a); // without sign
	*w = float(absval); // round to less int
	*f = absval - (*w);
}
void main()
{
	float x, fx;
	char sx;
	int wx;
	cout << "\n Enter float: ";
	cin >> x;
	split(x, &sx, &wx, &fx);
	cout << "\n sign is = " << sx;
	cout << "\n integer is = " << wx;
	cout << "\n float is = " << fx;
	system("pause");
}

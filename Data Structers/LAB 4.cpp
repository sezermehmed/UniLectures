// LAB 4
// 1-ex - Calculate binary code of digit - create a function, which show binary code of ligit
/*
#include <iostream>
using namespace std;
void dec2bin(int s);
void main()
{
	int n;
	do {
		cout << "Enter the positive number:";
		cin >> n;
	} while (n <= 0);
	dec2bin(n);
	system("pause");
}
void dec2bin(int s)
{
	if (s == 0)
		return;
	int s1 = s / 2;
	int res = s % 2;
	dec2bin(s1);
	cout << res << " ";
}
*/

// 2-ex - Towers of Hanoi - There are 3 towers and n disks. The task is to move all disks from source tower
// A to destination tower C. For each step you can move only one disk, and the following situation is not allowed
// __________
//  ------
/*
#include <iostream>
using namespace std;
void honoj(char A, char C, char B, int n) 
{
	if (n == 1)
		cout << "Move the disk 1 from " << A << " to " << C << endl;
	else {
		honoj(A, B, C, n - 1);
		cout << "Move the disk " << n << " from " << A << " to " << C << endl;
		honoj(B, C, A, n - 1);
	}
}
void main()
{
	char A = 'a', B = 'b', C = 'c';
	int n;
	do
	{
		cout << "Enter the disk's number n: ";
		cin >> n;
	} while (n <= 0 || n > 10);
	honoj(A, C, B, n);
}
*/

// 3 ex - Knight's Tour. The goal is to visit all square from chess board and mark with number from 1 to 64
// TASK: Change the first position from coordinate 0, 0 to another corner (0, 7 or 7, 0 or 7,7)
#include<iostream>
using namespace std;
const int N = 8, MAXN = N * N;
// global arrays about moves
int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
// global 2-dimensional array chess board
int h[N][N];
// Function about print the chess board
void print()
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		cout << endl;
		for (j = 0; j < N; j++)
			cout << h[i][j] << "\t";
	}
}
// Recursive function about Knight's next move

void NextMove(int x, int y, int i)
{
	int newX, newY, k;
	h[x][y] = i;
	if (i == MAXN)
	{
		print(); return;
	}
	for (k = 0; k < N; k++)
	{
		newX = x + dx[k];
		newY = y + dy[k];
		if ((newX >= 0 && newX < N) && (newY >= 0 && newY < N) && (0 == h[newX][newY]))
			NextMove(newX, newY, i + 1);
	}
	h[x][y] = 0; //backtracking
}
void main()
{
	int i, j;
	// set 0 into all elements of matrix
	for (i = 0; i < N; j++)
		for (j = 0; j < N; j++)
			h[i][j] = 0;
	// call function with start position 0, 0
	NextMove(0, 0, 1);
	cout << "\nNo solution!\n";
}

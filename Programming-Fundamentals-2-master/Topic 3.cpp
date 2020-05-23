// topic 3: Functions -exchange arrays asparameters name
// Example: Create main() function with menu -> with choice of functions:
//(Given oen-dimensional array before menu()
//1) Create new array with even elements only
//2) copy initial array in new array and sort it discending
//3) find max of positive elements and its position in array
//4) find first divisible of one given simple divider.
//5) print initial array and all results from 1 to 4
#include <iostream>
using namespace std;
void inmas(int* na, int A[], int max)
{
	do {
		cout << "\n size f array:";
		cin >> *na;
	} while (*na < 1 || *na > max);
	for (int i = 0; i < *na; i++)
	{
		cout << "\nA[" << i + 1 << "]=";
		cin >> A[i];
	}
}
void move(int na, int* pa, int* nb, int* pb)
{
	*nb = 0;
	for (int i = 0; i < na; i++, pa++)
	{
		if (*pa % 2 == 0)
		{
			*pb = *pa; pb++; (*nb)++;
		}
	}
}
void bblsort2(int n, int A[], int D[])
{
	int i, k, temp;
	for (i = 0; i < n; i++)
		D[i] = A[i];
	for (i = 0; i < n - 1; i++)
		for (k = i + 1; k < n; k++)
			if (D[i] < D[k])
			{
				temp = D[i];
				D[i] = D[k];
				D[k] = temp;
			}
}

////////////////////
void maxpol(int n, int A[], int* max, int* ind)
{
	*max = NULL;
	for (int i = 0; i < n; i++)

		if (A[i] > 0)
		{
			*max = A[i]; break;
		}
	if (*max)
		for (int i = 0; i < n; i++)
			if (*max < A[i] && A[i] > 0)
			{
				*max = A[i]; *ind = i;
			}
			else if (*max == NULL) { cout << "\n No positive numbers\n"; }
}


int* krat(int n, int* pa, int* kr, int* index)
{
	do {
		cout << "\n Enter simple number 2,3,4,7 or 9:";
		cin >> *kr;
	} while (*kr < 1);
	for (int i = 0; i < n; i++, pa++)
		if (!(*pa % *kr) && *pa != 0)
		{
			*index = i; return(pa);
		}
	return (NULL);
}
///////////////////
void result(int n, int A[], int m, int B[], int D[], int kr, int in, int* res, int maxpos, int index)
{
	int i;
	cout << "\n Initial array \n";
	for (i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}
	cout << "\n Array B with eve elements \n";
	for (i = 0; i < m; i++)
	{
		cout << B[i] << "\t";
	} 
	cout << "\n Sorted array D discending \n";
	for (i = 0; i < n; i++)
	{
		cout << D[i] << "\t";
	}
	cout << "\n Max of positive elements: " << maxpos;
	cout << "\t on position: " << index + 1 << endl;
}
void main()
{
	int A[100], B[100], C[100], D[100];
	int n, m{}, sum = 0, null, kr{}, in{}, ch;
	int* res{}, max = 100, maxpos{}, index{};
	inmas(&n, A, max);
	do {
		cout << "\n \t Menu ";
		cout << "\n 1.New Array with even elements ";
		cout << "\n 2.Sort descending ";
		cout << "\n 3.Max positive and index ";
		cout << "\n 4.First divisible by: ";
		cout << "\n 5.Print all results ";
		cout << "\n 6.Exit";
		do {
			cout << "\n Choice is: ";
			cin >> ch;
		} while (ch < 1 || ch > 6);
		switch (ch) {
		case 1: move(n, A, &m, B); break;
		case 2: bblsort2(n, A, D); break;
		case 3: maxpol(n, A, &maxpos, &index); break;
		case 4: res = krat(n, A, &kr, &in); break;
		case 5: result(n, A, m, B, D, kr, in, res, maxpos, index);
		}
	} while (ch != 6);

	system("pause");
}

/*#include <iostream>
using namespace std;
void main() {
	
	int q, *pq;
	pq = &q;  //pq points q
	q = 3;
	cout << "q = " << q << endl;  // 3
	cout << "&q = " << &q << endl; // adress
	cout << "pq = " << pq << endl; // adress 
	cout << "*pq = " << *pq << endl; // 3
	*pq = 20;
	cout << "q= " << q << "*pq= " << *pq << endl;  // 20 20
	cout << "sizeof(q)= " << sizeof(q) << endl;  // 4
	cout << "sizeof(pq)= " << sizeof(pq) << endl; // 4
	double p, *pp;
	p = 30, pp = &p;
	cout << "p = " << p <<  "*pp= " << *pp << endl;  //30 30
	cout << "sizeof(p) =  " << sizeof(p) << endl;  // 8
	cout << "sizeof(pp) = " << sizeof(pp) << endl;  // 4
	cout << "pp =  " << pp << endl; pp++;  //30 30
	cout << "pp = " << pp << endl;
	*pp = 40;
	(*pp)++; // 41
	(*pq)++;
	cout << "q = " << q << endl;
	cout << "*pq = " << *pq << endl;
	*pq += 1;

	cout << "q = " << q << endl;
	cout << "*pq = " << *pq << endl;

	++ *pq;

	cout << "q = " << q << endl;
	cout << "*pq = " << *pq << endl;
	int a[3] = {10, 20, 30},*pa;
	pa = a;
	cout << *pa << "\t" << *(pa + 1);
	cout << "\t" << *(pa +2) << endl;
	cout << *pa << "\t"<< *pa + 1 << "\t";
	cout << *pa + 2 << endl;
	*/

	//second 

	/*
	char x[] = " In vino veritas!";
	char *px;
	int y[4]={8,-3, 4 ,2};
	int *py, i;
	px = x; cout << px;
	px = &x[8];
	*px = 'f';
	px = &x[0]; cout << px;
	for(py = y; py < y + 4; ++py)
		*py *= *py;
	for(i = 0, py = y; i < 4; ++i, ++py)
	cout << "y [" << i + 1 << " ] =" << *py;
	*/

	// third
	// a) find the avarege success of student int the session.
	// b) find the max mark and position of exam
	// c) print all that max marks of the session
	#include <iostream>
	using namespace std;
	int main() {
		int i, n;
		float marks[10], avr, *pm, *pend, *pmax;
		do {
			cout << "\n How many exams in this session "; cin >> n;
		}while (n < 1 || n > 10);
		{
			for(i = 0; i < n; i++) 
			{
			cout << "\n Value of " << i + 1 << " mark: ";
			cin >> marks[i];
			}
			// a
			pm = marks; pend = marks + n;
			for(avr = 0; pm < pend; ++pm)
				avr += *pm;
			avr /= n; cout << "\n Avarege mark is = " << avr << endl;
			// b
			pm = marks;
			pmax = pm;
			for(++pm; pm < pend; ++pm)
				if(*pmax < *pm)
					pmax = pm;
			// c
			pm = marks;
			for(pm; pm < pend; ++pm)
				if(*pmax == *pm)
				{
					cout << "\n max mark= " << *pm;
					cout << "\t on subject=" << pm-marks + 1 << endl;
				}
		}
	//system("pause");
}
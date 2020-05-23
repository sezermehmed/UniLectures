#include <iostream> 
#include <sstream>
using namespace std;
void entering(int arr[]) {
	cout << "Enter 10 int input: " << endl;
	for (int i = 0; i < 10; i++)
		cin >> arr[i];
}
void seperator(int arr[], int narr1[], int narr2[], int&size1, int&size2) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] >= 10 && arr[i] <= 50) {
			narr1[size1++] = arr[i];
		}
		else if(arr[i] <= -10 && arr[i] >= -50) {
			narr2[size2++] = arr[i];
		}
	}
}
void display(int arr[], int size) {
	if (size != 0) {
		for (int i = 0; i < size; i++) {
			cout << endl << arr[i];
		}
	}
	else cout << endl << " They are no elements";
		
	}
int main() {
	int arr[10], new1[10], new2[10];
	int k(0), e(0);
	entering(arr);
	cout << endl <<"You entered" << endl;
	display(arr, 10);
	seperator(arr, new1, new2, k, e);
	cout << endl << "positives" << endl;
	display(new1, k);
	cout << endl << "negatives" << endl;
	display(new2, e);
}
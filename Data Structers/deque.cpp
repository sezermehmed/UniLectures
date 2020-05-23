#include <iostream>
#include <deque>
using namespace std;
deque<int> container;
int c_size, e;
bool isItThere = false;
void takeInfo() 
{
cout << "Enter container size: "; cin >> c_size;
cout << "Enter elements of container: \n";
	for(int i = 0; i < c_size; i++)
	{
		cin >> container[i];
	}
cout << "Search an element into container:  "; cin >> e;
}
void search()
{
	for(int i = 0; i < c_size; i++)
	{
		if(container[i] == e) 
		{
			isItThere = true;
			break;	
		}
	}
}
void check() 
{
	if(isItThere == true) 
	{
		cout << e << " is included in the container. \n";
	}
	else
	{
		cout << e << " is not included in the container \n";
	}
}
int main()
{
takeInfo();
search();
check();
}

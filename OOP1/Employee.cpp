// Sezer Mehmed  -  SIT-AEO



#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
protected:
	string name; double salary;
public:
	Employee()
	{ name = "";
	salary = 0; 
	}

	Employee(string n, double s) 
	{
		name = n; salary = s;
	}
	Employee(const Employee& p2)
	{
		name =p2.name;
		salary = p2.salary;

	}
	~Employee() {}
	//overloading operators
	bool operator<(Employee& empl)
	{
		if (this->salary < empl.salary)
			return true;
		return false;
	}
	bool operator>=(Employee& empl)
	{
		if (this->salary >= empl.salary)
			return true;
		return false;
	}
	bool operator==(Employee& empl)
	{
		return (this->salary == empl.salary && this->name == empl.name);
			
	}
	Employee& operator=(Employee& empl)
	{
		this->name = empl.name;
		this->salary = empl.salary;
		return *this;
	}

	string getName();
	double getSalary();
	void setName(string name);
	void setSalary(double s);

	double increase(double i);
	double decrease(double d);empl.
	void show();
};

double Employee::getSalary()
{
	return salary;
}

string Employee::getName()
{
	return name;
}

void Employee::setName(string n)
{
	name = n;
}

void Employee::setSalary(double s)
{
	salary = s;
}


double Employee::increase(double i)
{
	return salary = salary+i;
}
double Employee::decrease(double d)
{
	return salary - = d;
}

void Employee::show()
{
	cout << name << "\t" << salary << endl;
}

class Manager : public Employee {
private:
	string Department;
public:
	Manager() { Department = ""; }

	Manager(string n, double s, string d):Employee(n,s)
	{ 
		Department = d; }
	Manager(const Manager& p2)
	{
		name = p2.name;
		salary = p2.salary;
		Department = p2.Department;
	}
	~Manager() {  }
	void show();

	void setDepartment(string department);

	string getDepartment();

	friend ostream& operator<<(ostream& strm, const Manager& tmp) {
		strm << tmp.name << " " << tmp.salary << " " << tmp.Department <<  endl;
		return strm;
	}

	friend istream& operator>>(istream& strm, Manager& tmp) {
		strm >> tmp.name >> tmp.salary >> tmp.Department;
		return strm;
	}


};

void Manager::setDepartment(string d)
{
	Department = d;
}

string Manager::getDepartment()
{
	return Department;
}

void Manager::show()
{
	cout << endl;
	Employee::show(); cout << "Department: " << Department << endl;
}



int main()
{
	Employee Micheal, Julia, Melisa;
	Employee Sezer("Sezer",3000);
	Employee Emre(Sezer);
	
	Micheal.setName("Micheal");
	Micheal.setSalary(1000);
	Micheal.show();
	double mic = Micheal.getSalary();
	Sezer.show();
	Julia.setName("Julia");
	Julia.setSalary(2000);
	Julia.show();
	double jul = Julia.getSalary();

	Melisa.setName("Melisa");
	Melisa.setSalary(3000);
	Melisa.show();
	double mel = Melisa.getSalary();
	if (Micheal >= Julia && Micheal >= Melisa)
	//if (mic >= jul && mic >= mel)
	{
		cout << "Biggest salary is: " << Micheal.getSalary()<<" has "<< Micheal.getName() << endl;
	}
	if (jul >= mic && jul >= mel) {
		cout << "Biggest salary is: " << jul;
	}
	if (mel >= mic && mel >= jul) {
		cout << "Biggest salary is: " << mel;
	}

	cout << endl << " -----------------------  2. Part ------------------------- ";
	Manager Georgia, Hans, Svelte;
	Manager man("Alex",5000,"Account");
	Manager man2(man);
	cout << "Input name, salary and department, please";
	cin >> Georgia;
	cout >> Georgia;
	/*Georgia.setName("Georgia");
	Georgia.setSalary(10000);
	Georgia.setDepartment("IT");
	Georgia.show();*/
	double geo = Georgia.getSalary();

	Hans.setName("Hans");
	Hans.setSalary(20000);
	Hans.setDepartment("Insurance");
	Hans.show();
	double hans = Hans.getSalary();

	Svelte.setName("Svelte");
	Svelte.setSalary(30000);
	Svelte.setDepartment("Human Resources");
	Svelte.show();
	double svelte = Svelte.getSalary();
	cout << endl;
	if (geo >= hans && geo >= svelte) {
		cout << "Biggest salary is: " << geo;
	}
	if (hans >= geo && hans >= svelte) {
		cout << "Biggest salary is: " << hans;
	}
	if (svelte >= geo && svelte >= hans) {
		cout << "Biggest salary is: " << svelte;
	}
	cout << endl;
	vector<Manager> dep;
	dep.push_back(Svelte);
	dep.push_back(Georgia);
	dep.push_back(Hans);
	for (int i = 0; i < dep.size(); ++i) 
		cout << dep[i] << endl;



}

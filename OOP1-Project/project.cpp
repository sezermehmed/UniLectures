// C++ program to illustrate the 
// iterators in vector 
#include <iostream> 
#include <vector> 
#include <numeric>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

class RentCar {
protected:
    int RatePerHour;
    string model, RegistrationNumber;
public:
    RentCar() { RatePerHour = 0; }; // Default Constructor
    RentCar(string reg, int rate, string mdl) {
        RegistrationNumber = reg;
        RatePerHour = rate;
        model = mdl;
    }; // Constructor with 3 arguments 
    RentCar(const RentCar& p1) {
        RegistrationNumber = p1.RegistrationNumber;
        RatePerHour = p1.RatePerHour;
        model = p1.model;
    } // Copy Constructor
    ~RentCar() {}; // Destructor
    string getModel() { // Accessors
        return model;
    };
    int getRate() {
        return RatePerHour;
    };
    string getReg() {
        return RegistrationNumber;
    }
    void setModel(string m) { // Mutators
        model = m;
    }
    void setRate(int r) {
        RatePerHour = r;
    }
    void setReg(string reg) {
        RegistrationNumber = reg;
    }

    bool operator<(RentCar& rent)
    {
        if (this->RatePerHour < rent.RatePerHour)
            return true;
        return false;
    }
    bool operator>=(RentCar& rent)
    {
        if (this->RatePerHour >= rent.RatePerHour)
            return true;
        return false;
    }
    bool operator==(RentCar& rent)
    {
        return (this->RegistrationNumber == rent.RegistrationNumber && this->model == rent.model);

    }

    void Print() {
        cout << " Model is " << model << endl;
        cout << " Registration Number is " << RegistrationNumber << endl;
        cout << " Rate is " << RatePerHour << endl;
    }

};

class Customer : public RentCar {
private:
    string name;
    int hours;
public:
    Customer() {}; // Default constructor
    Customer(string name1, int hours1, string model1, string Reg, int rate) :RentCar(Reg, rate, model) {
        name = name1;
        hours = hours1;
    }; // with parameters
    int bill()const {
        return hours * RatePerHour;
    }
    bool operator>=(Customer& r)
    {
        if (this->bill() >= r.bill())
            return true;
        return false;
    }
    bool operator<(Customer& r)
    {
        if (this->bill() < r.bill())
            return true;
        return false;
    }
   // friend ostream& operator<<(ostream& os, const Date& dt);
    friend ostream& operator<<(ostream& os, const Customer& dt)
    {
        os << dt.hours << " " << dt.model << " " << dt.name << " " << dt.RatePerHour << " " << dt.RegistrationNumber << " " << dt.bill() << endl;
        return os;
    }
    friend bool byRate(const Customer& c1, const Customer& c2);
      
   



    void inputData()
    {
        cout << "Input Name:";
        cin >> name;
        cout << "Input hours: ";
        cin >> hours;
        cout << "Input model:";
        cin >> model;
        cout << "Input regist:";
        cin >> RegistrationNumber;
        cout << "Input rate:";
        cin >> RatePerHour;

    }
    void output() {
        cout << "name: " << name << "\n" << "hours: " << hours << "\n" << "model: " << model << "\n" << "RegNum: " << RegistrationNumber << "\n" << "RateperHour: " << RatePerHour << endl;
    }
    string getName() {
        return name;
    }
    int getRate() {
        return RatePerHour;
    }
    string getReg() {
        return 	RegistrationNumber;
    }
    int getHours() {
        return hours;
    }
   
};
bool byRate(const Customer& c1, const Customer& c2) {
    return c1.RatePerHour < c2.RatePerHour;
}

int main()
{
    std::list<Customer> mylist;
    int input;
    do {
        printf(" 1.Add a new Customer to the container \n 2.Search the customer with given name \n 3.Delete the customer with given name \n 4.	Output the all objects from the container; \n 5.Find the customer with given registration number of the car; \n 6.Find the customer, who has maximum bill to pay; \n 7.	Find the customer with the most expensive car (by rate per hour); \n 8.Calculate the amount of all customer’s bills. \n 9. Exit\n");
        cin >> input;
        switch (input)
        {
        case 1: {
            Customer c;
            c.inputData();
            mylist.push_back(c);
        }
              break;
        case 2: {
            string name1;
            bool found = false;
            cout << "Search a name: ";
            cin >> name1;
            for (auto x = mylist.begin(); x != mylist.end(); ++x) {
                if (x->getName() == name1) {
                    x->output();
                    found = 1;
                }
            }
            /*     if (found) {
                     cout << "Found";
                 }*/
            if (!found) { cout << "Not Found"; }
        }
              break;
        case 3: {
            string name1;
            bool found = false;
            cout << "Search a name: ";
            cin >> name1;
            for (auto x = mylist.begin(); x != mylist.end(); x++)
            {
                if (x->getName() == name1)
                {
                    found = 1;
                    x = mylist.erase(x);
                    if (x == mylist.end())
                    {
                        break;
                    }
                }
            }
            if (!found) {
                cout << "No such Name";
            }
        }
              break;
        case 4: {
            for (auto x = mylist.begin(); x != mylist.end(); ++x) {
                x->output();
            }
        }
              break;
        case 5:
        {
            string reg;
            bool found = 0;
            cout << "Search reg num: ";
            cin >> reg;
            for (auto x = mylist.begin(); x != mylist.end(); x++)
            {
                if (x->getReg() == reg)
                {
                    found = 1;
                    x->output();
                    if (x == mylist.end())
                    {
                        break;
                    }
                }
            }
            if (!found) {
                cout << "No such a Registration number." << endl;
            }
        }
        break;
        case 6: {
            std::cout << "The largest element is " << *std::max_element(mylist.begin(),mylist.end()) << '\n';
            
        }
              break;
        case 7: {
                cout << "The most expensinve Car is " << *max_element(mylist.begin(), mylist.end(), byRate) << endl;
        }
            break;
        case 8: {
            int a = 0;
            for (auto x = mylist.begin(); x != mylist.end(); x++)
            {
              a += x->bill();
            }
             cout <<"Amout of all customer's bills: " << a << endl;
        }
            break;
        case 9: {
            string model;
            int sumofBills{};
            cout << "Model: " << endl;
            cin >> model;
            for (auto x = mylist.begin(); x != mylist.end(); x++)
            {
                if (x->getModel() == model) {
                    sumofBills += x->bill();
               }
            }
            cout << "Sum of bills of given model: " << sumofBills << endl;
            }
            break;
        
        case 10: {
            int count;
            for (auto x = mylist.begin(); x != mylist.end(); x++)
            {
                if (x->getHours() >= 5) {
                    cout << x->getName() << "is used the car more than 5 hours" << endl;
                    count++;
                }
            }
            cout << "the number is:" << count << endl;

        }
            break;
        case 11: {

        }
            break;
        }
    } while (input != 11);
    // add additional case to find sum of bills of cars from given model.
    // to find count of customers which rent a car for more than 5 hour.
    // 
    // 
    // 
    //c.setModel("bmw");
    //mylist.push_back(c);
    //cout <<"List: "<< mylist;
    //for (auto x = mylist.begin(); x != mylist.end(); ++x) {
    //    std::cout << *x << " ";
    //}




    //vector<int> g1, vodd;

    //for (int i = 1; i <= 16; i++)
    //    g1.push_back(i);

    //cout << "Output with index: ";
    //for (int i = 0; i < g1.size(); i++) {
    //    cout << g1[i] << " ";
    //}
    //cout << endl;
    //    
    //    
    ////vector<int>::const_iterator it;
    //for (auto it = g1.begin(); it != g1.end(); ) {
    //    if (*it % 2 == 1) {
    //        vodd.push_back(*it);
    //        it=g1.erase(it);
    //    }
    //    else {
    //        ++it;
    //    }
    //}
    //for (int i = 0; i < g1.size(); i++) {
    //    cout << g1[i] << " ";
    //}
    ////avarage  of even 
    //float avarage = accumulate(g1.begin(), g1.end(), 0.0) / g1.size();
    //cout << endl << "Avarage is: " << avarage;
    ////
    //cout << endl;
    //for (int i = 0; i < vodd.size(); i++) {
    //    cout << vodd[i] << " ";
    //}
    ////avarage of odd
    //float avarageodd = accumulate(vodd.begin(), vodd.end(), 0.0) / vodd.size();
    //cout << endl << "Avarage is: " << avarageodd;

    //cout << endl;
    //cout << endl;
    //cout << endl;
    //cout << endl;


       /* cout << "Output of begin and end: ";
        for (it = g1.begin(); it != g1.end(); ++it)
            cout << *it << " ";

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";
        */
    return 0;
}
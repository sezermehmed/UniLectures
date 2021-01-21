#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Address {
private:
    std::string name_of_town, street_name;
    int street_number;
public:
   // Address() {} // Default Constructor
    Address() {
        name_of_town = "";
        street_name = "";
        street_number = 0;
    }      // with paremeters
    Address(string t, string s, int sn) {
        name_of_town = t;
        street_name = s;
        street_number = sn;
    }
    Address(const Address& p2) {
        name_of_town = p2.name_of_town;
        street_name = p2.street_name;
        street_number = p2.street_number;
    }
    ~Address() {} // Desctucter
    bool operator<(Address& addr) {
        if (this->street_number < addr.street_number)
            return true;
    }
    bool operator==(Address& addr) {
        return (this->street_number == addr.street_number && this->name_of_town == addr.name_of_town && this->street_name == addr.street_name);
    }

    string get_name_of_town();
    string get_street_name();
    int get_street_number();

    void set_name_of_town(string name_of_town);
    void set_street_name(string street_name);
    void set_street_number(int street_number);

    bool IsOdd();

    void show();
};
// Getters   -  Accessors
string Address::get_name_of_town() {
    return name_of_town;
}
string Address::get_street_name() {
    return street_name;
}
int Address::get_street_number() {
    return street_number;
}

// Setters   -  Mutators
void Address::set_name_of_town(string t) {
    name_of_town = t;
}
void Address::set_street_name(string s) {
    street_name = s;
}
void Address::set_street_number(int sn) {
    street_number = sn;
}

// bool function Is_Odd() which returns true, if the street_number in odd
bool Address::IsOdd() {
    if (street_number % 2 == 1) {
        return true;
    }
    else {
        return false;
    }
}


void Address::show()
{
    cout << endl;
    cout << "Name of Town: " << get_name_of_town << endl;
    cout << "Street name: " << get_street_name << endl;
    cout << "Street number: " << get_street_number << endl;
}



int main()
{
    Address Varna, Sofia;
    Varna.set_street_number(1000);
    Sofia.set_street_number(2000);

    Varna.show();
    Sofia.show();

    //vector<Address> dep;
    
    //dep.push_back(Varna);
    //dep.push_back(Sofia);

    //vector<Address>::const_iterator it;
    
    //it = max_element(dep.begin(), dep.end());
    
}





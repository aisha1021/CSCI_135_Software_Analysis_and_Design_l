/*
Name: Aisha Malik
Course: CSCI 135
Instructor: Tong Yi
Assignment: Lab Quiz 12

Customer

Define class Customer, 
which as data member name and unique_id, 
both of string type. Define default and 
non-default constructor, setter, and getter.
*/

#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    string name;
    string unique_id;

public:
    Customer();
    Customer(string input_name, string input_unique_id);
    string get_name();
    string get_unique_id();
    void set_name(string input_name);
    void set_unique_id(string input_unique_id);
};

Customer::Customer() {
    name = "";
    unique_id = "";
}

Customer::Customer(string input_name, string input_unique_id) {
    name = input_name;
    unique_id = input_unique_id;
}

string Customer::get_name() {
    return name;
}

string Customer::get_unique_id() {
    return unique_id;
}

void Customer::set_name(string input_name) {
    name = input_name;
}

void Customer::set_unique_id(string input_unique_id) {
    unique_id = input_unique_id;
}

int main() {
    Customer defaultCustomer;

    cout << "Default Customer Information:" << endl;
    cout << "Name: " << defaultCustomer.get_name() << endl;
    cout << "Unique ID: " << defaultCustomer.get_unique_id() << endl;
    cout << endl;

    Customer customCustomer("John Doe", "123456");

    cout << "Custom Customer Information:" << endl;
    cout << "Name: " << customCustomer.get_name() << endl;
    cout << "Unique ID: " << customCustomer.get_unique_id() << endl;
    cout << endl;

    customCustomer.set_name("Jane Smith");
    customCustomer.set_unique_id("789012");

    cout << "Updated Custom Customer Information:" << endl;
    cout << "Name: " << customCustomer.get_name() << endl;
    cout << "Unique ID: " << customCustomer.get_unique_id() << endl;

    return 0;
}

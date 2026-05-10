#include<iostream>
using namespace std;

//! this program about taking basic details of user and printing

int main(){

    string name1;
    string name2;
    int roll_number;
    int class_number;

    cout << "Enter your first name: ";
    cin >> name1;

    cout << "Enter your last name: ";
    cin >> name2;

    cout << "Enter your Roll number: ";
    cin >> roll_number;

    cout << "Enter your class number: ";
    cin >> class_number;

    // now printing all entered values
    cout << "Name: " << name1 << " " << name2 << endl;
    cout << "Roll Number: " << roll_number << endl;
    cout << "Class Number: " << class_number << endl;

    
    return 0;
}
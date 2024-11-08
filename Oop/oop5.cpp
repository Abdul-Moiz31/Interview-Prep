#include <iostream>
using namespace std;
// Array by an object

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 200;
        cout << "Enter the id of Employee : " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << " The Id of employee is " << id << endl;
    }
};
int main()
{
    // Employee ali, aqib, bilal;
    // ali.setId();
    // aqib.setId();
    // bilal.setId();

    // ali.getId();
    // aqib.getId();
    // bilal.getId();

    Employee ar[6];
    for(int i = 0 ; i<6 ; i++){
        ar[i].setId();
        ar[i].getId();
    }

    return 0;
}
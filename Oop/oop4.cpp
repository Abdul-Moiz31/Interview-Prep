// #include <iostream>
// using namespace std;

// int main(){

//     return 0;
// }

#include <iostream>
using namespace std;
class Employee
{

    int id;
    string name;
    string degree;
    string email;
    int salary;
    int Bonus; 
    int number;
    // static int count;

public:
    void setData(void)
    {
        cout << " Enter the id" << endl;
        cin >> id;
        cout << " Enter the name" << endl;
        cin >> name;
        cout << " Enter the Degree" << endl;
        cin >> degree;
        cout << " Enter the email" << endl;
        cin >> email;
        cout << " Enter the salary" << endl;
        cin >> salary;
        cout << " Enter the Bonus" << endl;
        cin >> Bonus;
        cout << " Enter the Phone number" << endl;
        cin >> number;
    }
    void getData(void)
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Degree : " << degree << endl;
        cout << "Email  : " << email << endl;
        cout << "Salary : " << salary << endl;
        cout << "Bonus : " << Bonus << endl;
        cout << "Phone Number: " << number << endl;
    }
};
// int Employee ::count;
int main()
{
    Employee Ali, Moiz, Ahmad , Bilal;
    // Ali.id = 1;
    // Ali.count = 1; // We cannot do this because the both are private

    Moiz.setData();
    Ahmad.setData();
    Moiz.getData();
    // Ahmad.getData();

    // Bilal.setData();
    // Bilal.getData();

    return 0;
}
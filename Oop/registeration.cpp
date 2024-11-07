#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Classes

class temp
{
    string Username, Email, password;
    string searchName, searchPass, searchEmail;
    fstream file;

public:
    void signin();
    void signup();
    void forget();

} obj;
// Sign up Form
void temp ::signup()
{
    cout << "\n Enter your Username : ";
    getline(cin, Username);
    cout << "\n Enter your Email :";
    getline(cin, Email);
    cout << "\n Enter your Password :";
    getline(cin, password);
    file.open("SigninData.txt", ios ::out | ios ::app);
    file << Username << "*" << Email << "*" << password << endl;
    file.close();
}
// Sign In Form

void temp ::signin()
{

    string search, searchName, searchpassword;
    cout << "----------------------Login-----------------------" << endl;
    cout << "\n Enter your Username " << endl;
    getline(cin, searchName);
    cout << "\n Enter your Password " << endl;
    getline(cin, searchpassword);

    file.open("SigninData.txt", ios ::in);
    getline(file, Username, '*');
    getline(file, Email, '*');
    getline(file, password, '\n');

    while (!file.eof())
    {
        if (Username == searchName)
        {
            if (password == searchpassword)
            {
                cout << "\n Account Login Successfull.........! ";
                cout << "\n Username : " << Username << endl;
                cout << "\n Email" << endl;
            }
            else
            {
                cout << " Password is Incorrect ( Masti na kro sahi password lgao ) ";
            }
        }
        getline(file, Username, '*');
        getline(file, Email, '*');
        getline(file, password, '\n');
    }
    file.close();
}

// Forget Password

void temp ::forget()
{
    cout << "\n Enter you Username : ";
    getline(cin, Username);
    cout << "\n Enter you Email : ";
    getline(cin, searchEmail);

    file.open("SigninData.txt", ios ::in);
    getline(file, Username, '*');
    getline(file, Email, '*');
    getline(file, password, '\n');
    while (!file.eof())
    {
        if (Username == searchName)
        {
            if (Email == searchEmail)
            {

                cout << "\n Account Found ..... !!!";
                cout << "Your Password is : " << password << endl;
            }
            else
            {
                cout << " Not found ......!\n";
            }
        }
        else
        {
            cout << "\n  Not found .......!\n";
        }
    }
    file.close();
}
int main()
{
    // Switch Statements
    char choice;
    cout << "\n 1- Sign-in";
    cout << "\n 2- Sign-up";
    cout << "\n 3- Forget Password";
    cout << "\n 4- Exit";
    cout << "\n Enter your Choice : ";
    cin >> choice;

    switch (choice)
    {

    case '1':
        obj.signin();
        break;
    case '2':
        obj.signup();
        break;
    case '3':
        obj.forget();
        break;
    case '4':
        return 0;
        break;
    default:
        cout << " Invalid Selection....";
    }
}

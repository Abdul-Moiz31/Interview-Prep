#include <iostream>
using namespace std;

int main(){
    int a ,b ;

    cout << " Enter the first number:" << endl;
    cin >> a;
    cout << " Enter the second number:" << endl;
    cin >> b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << " The out of the swapped number is : " << endl;
    cout << "First number is :" << a << endl;
    cout << "Second number is:"<< b << endl;
    system("pause");
    return 0;


}
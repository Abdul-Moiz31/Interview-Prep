#include <iostream>
using namespace std;

int main(){
    int dividend , divisor , Quotiont , Remainder;

    cout << " Enter the dividend : " << endl;
    cin >> dividend;
    cout << " Enter the divisor : " << endl;
    cin >> divisor;
    cout << " Quotiont is :" << dividend / divisor << endl;
    cout << " Remainder is :" << dividend % divisor << endl;
    system("pause");
    return 0;
}
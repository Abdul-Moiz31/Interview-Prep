#include <iostream>
using namespace std;

int main (){
    float number ;
    cout<< " Enter the number :" << endl;
    cin >> number ;
    
    if(number > 0){
        cout << " The Number is Positive :" << number << endl;
    } if(number < 0){
        cout << " The Number is Negative :" << number << endl;
    }
    system("pause");
    return 0;
}
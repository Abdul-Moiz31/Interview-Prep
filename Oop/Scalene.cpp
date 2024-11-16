// C++ program to Calculate Area of Scalene Triangle.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "\t\t Calculate the Area of Scalene Triangle." << endl;

    float a , b , c , S , Area;

    
    cout << "Enter the first side of the triangle :" << endl;
    cin >> a;
    cout << "Enter the second side of the triangle :" << endl;
    cin >> b;
    cout << "Enter the third side of the triangle :" << endl;
    cin >> c;

    if(a > 0 && b > 0 && c > 0){
        if(c < a+b && a < b+c && b < c+a){
            S = (a+ b+c)/2;
            Area = sqrt(S*(S-a)*(S-b)*(S-c));
            cout<< " The Area of Scalene Triangle is:" << Area << endl;
            return 0;
        }
        else{
            cout << "These side cannot form a triangle" << endl;
            return 0;
        }
        }
        else {
		cout << "The sides of Triangle cannot be negative numbers!" << endl;
	}
        system("pause");
        return 0;

}
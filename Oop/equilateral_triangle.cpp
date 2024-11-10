// C++ program to Calculate Area of Equilateral Triangle.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
      cout << " \t\tCalculate Area of Equilateral Triangle " << endl;
      double a , Area;
      cout << " Enter the value of the side of the triangle" << endl;
      cin>> a;

      if(a > 0){
        Area = (sqrt(3) / 4) * a * a;
        cout << " Area of Equilateral Triangle is : " << Area << endl;

      } else {
        cout << " The side of triangle cannot be negative " <<   endl;
      }

      system("pause");
    return 0;
}
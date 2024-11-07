#include <iostream>
#include <cmath>
using namespace std;


int main (){
    double radius, area;

    int choice  , length , width , base , height;
    cout << " !---------------------------Area of Figures---------------------------! " << endl;
   cout << " \n 1-Area of Circle " << endl;
   cout << " \n 2-Area of Rectangle " << endl;
   cout << " \n 3-Area of Triangle " << endl;
   cout << " \n 4-Area of Square " << endl;
   cout << " \n Enter your Choice :  " << endl;
   cin >> choice; 


    switch(choice){

    case 1:
       cout << "\n Enter the Radius of Circle :  " << endl; 
       cin >> radius;
       area = 3.14 * pow(radius, 2);
       
    break;
        
    case 2:
        cout << " \n Enter the Length " <<endl;
        cin >> length;
        cout << "\n Enter the width"  << endl;
        cin >> width; 
        area = length * width;

    break;
    case 3:
        cout << " \n Enter the base " <<endl;
        cin >> base;
        cout << "\n Enter the height"  << endl;
        cin >> height; 
        area = 0.5 * (base * height);
    break;
     case 4:
        cout << " \n Enter the Length of the side of Square" <<endl;
            cin >> length;
         
        area = pow(length,2);
    break;
    default:
    cout<< "\nInvalid Choice............!!!" <<endl;
    }
    cout<< "\n Area :: " << area <<endl;
    return 0; 
}
#include <iostream>
using namespace std;



class Student{
    
    private:
    int age;
    int number;
    public: 
    int id;
    string name;
    string address;
   

    void setData(int id1 , string name1 , string address );
    void getData(){
        
        cout<< "ID:" <<id <<endl;
        cout<< "Name:" <<name <<endl;
        cout<< "Address:" <<address <<endl;
    }
    void setData(int age1, int number1);
};
 class Employee{
        private:
        int a , b , c ;
        public:
        int d , e ;

        void setData(int a1 , int b1, int c1);
        void getData(){
            cout << " The Value of a is " <<a <<endl;
            cout << " The Value of a is " <<b <<endl;
            cout << " The Value of a is " <<c <<endl;
            cout << " The Value of a is " <<d <<endl;
            cout << " The Value of a is " <<e <<endl;
        }

    };

    void Student :: setData(int age1  , int number1 ){
        age = age1;
        number= number1 ;

    }
    

    void Employee :: setData(int a1 , int b1 , int c1){
        a=a1;
        b=b1;
        c=c1;
    }
int main(){
      Employee moiz;
      moiz.d = 34;
      moiz.e = 35;
      moiz.setData(1,3 ,4);
      moiz.getData();

      Student Ali;  
      Student Ahmad;
      
      Ahmad.id= 1;
      Ahmad.name= "Ahmad" ;
      Ahmad.address= "Karachi" ;
      Ahmad.setData(34 , 0330121212);
      Ahmad.getData();
      Ali.id= 2;
      Ali.name= "Ali" ;
      Ali.address= "Lahore" ;
      Ali.setData(35 , 000000000);
      Ali.getData();



    return 0;
}
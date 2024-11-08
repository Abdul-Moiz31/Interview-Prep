#include <iostream>
#include <cstdlib>
#include <ctime> // for random time generation
#include <string>
using namespace std;


string getPassword(int length){
     string Password = "";
     string characters = "aquickbrownfoxjumpsoverthelazydogAQUICKBROWNFOXJUMSOVERTHELAZYDOG0123456789";
     int charSize = characters.size();
     srand(time(0));
     int randomIndex;
     for(int i=0 ; i<length ; i++){
        randomIndex = rand() % charSize;
        Password = Password + characters[randomIndex];
     }
     return Password;

}
int main(){
      int length;
      cout << " Enter the length if the Password you want to generate :" << endl;
      cin>>length;
      string password = getPassword(length);
      cout << " The Generated Password is :" << password << endl;
    return 0;
}
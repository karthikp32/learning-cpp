#include <iostream>

using namespace std;

int main(){
  int password;
  bool anotherUsername;
  string username;

  while(anotherUsername == true){
    cout << "Enter the username: ";
    cin >> username;
    cout << "Enter the password: ";
    cin >> password;
    if(username == "karthikp32" && password == 23){
      cout << "You entered a correct username and password!"<<endl;
      anotherUsername = false;
    }
    else if(username == "swathip32" && password == 23){
      cout << "You entered a correct username and password!"<<endl;
      anotherUsername = false;
    }
    else{
      anotherUsername = true;
    }
  }
}

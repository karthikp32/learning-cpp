#include <iostream>
#include <string>

using namespace std;

int main() {
  String first_name;
  String last_name;
  double first_operand;
  double second_operand;
  cout << "Enter first argument: ";
  cin >> first_operand;
  cout << "Enter second argument: ";
  cin >> second_operand;
  cout << first_operand << " * " << second_operand << " = " << first_operand * second_operand << endl;
  cout << first_operand  << " + " << second_operand << " = " << first_operand + second_operand << endl;
  cout << first_operand  << " / " << second_operand << " = " << first_operand/second_operand << endl;
  cout << first_operand  << " - " << second_operand << " = " << first_operand-second_operand << endl;
  cout << "Please enter your first name: " ;
  cin << first_name;
  cout << "Please enter your last name: " ;
  cin << last_name;
  cout << "Hello, " << first_name + " " + last_name << "!\n";

}

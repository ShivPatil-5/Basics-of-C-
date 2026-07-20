#include <iostream>

using namespace std;

int main()
{
  int cents;
  cout << "Enter number of cents for the calculation : ";
  cin >> cents;
  cout << endl;

  int dollar = cents/100;
  int quarter = (cents - (dollar*100))/25;
  int dime = (cents - (dollar*100) - (quarter*25))/10;
  int nickel = (cents - (dollar*100) - (quarter*25) - (dime*10))/5;
  int penny = cents - (dollar*100) - (quarter*25) - (dime*10) - (nickel*5);

  cout << "==================" << endl;
  cout << "Dolllar : " << dollar << endl;
  cout << "Quarter : " << quarter << endl;
  cout << "Dime : " << dime << endl;
  cout << "Nickel : " << nickel << endl;
  cout << "Penny : " << penny << endl;
  cout << "==================" << endl;

  return 0;

}
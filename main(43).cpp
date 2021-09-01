#include <iostream>

using namespace std;

//variables go here

double num1;
double num2;
double res;

or //double num1,num2,res;

int main()
{
  cout << "let's add, substract, multiply and divide 2 numbers" << endl;
  
  cout << "number 1: ";
  cin >> num1;
  
  cout << "number 2: ";
  cin >> num2;
  
  res=num1+num2;
  cout << "the result of adding " << num1 << " + " << num2 << " is " << res << endl;
  
  res=num1-num2;
  cout << "the result of substracting " << num1 << " - " << num2 << " is " << res << endl;
  
  res=num1*num2;
  cout << "the result of multiplying " << num1 << " * " << num2 << " is " << res << endl;
  
  res=num1/num2;
  cout << "the result of dividing " << num1 << " / " << num2 << " is " << res << endl;
  
  //or cout << "Addition \t" < num1 + num2;
  
  return 0;
}
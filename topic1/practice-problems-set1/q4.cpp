// Program will not compile

#include <iostream>
using namespace std; 
int main ()
{
  cout >> "Program to find area of a trapezium: "; 
  int a,b,h; 
  float area; 
  cout << "Enter values of a and b, and h:"; 
  cin >> a >> b >> h; 
  area = (h/2)*(a+b); 
  cout << "The area is "area; 
  return a; 
}
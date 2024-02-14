//Lab2_calc.ccp
/***
 * {This lab will show the difference beetween dividing with integers and with doubles.}
***/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  //numerical
  int int_x = 1;
  int int_y = 2;
  double double_z = 1.0;

  cout << "int divided by int: " << int_x / int_y << endl;
  cout << "int divided by double: " << int_x / double_z << endl;
}
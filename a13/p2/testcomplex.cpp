/*CH230 a13p2
  Muaaz Rajput
  murajput@jaccobs-university.de
*/

#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main(){
  float real, imag;
  Complex sum, prod, diff;

  // reads number from first file if it was opened
  ifstream in("in1.txt", ios::in);
  if (!in.is_open()){
    cout << "First file does not exist or could not be opened." << endl;
    exit(1);
  }
  in >> real;
  in >> imag;
  Complex first(real, imag);

  // reads number from second file if it was opened
  ifstream in_two("in2.txt", ios::in);
  if (!in_two.is_open()){
    cout << "Second file does not exist or could not be opened." << endl;
    exit(1);
  }
  in_two >> real;
  in_two >> imag;
  Complex second(real, imag);
  
  // calculate sum, product,and difference using overloaded operators
  sum = first + second;
  prod = first * second;
  diff = first - second;
  
  // print to screen
  cout << "SUM: " << sum << endl;
  cout << "PRODUCT: " << prod << endl;
  cout << "DIFFERENCE: " << diff << endl;

  // print to file
  ofstream out("output.txt");
  out << "SUM: " << sum << endl;
  out << "PROD: " << prod << endl;
  out << "DIFFERENCE: " << diff << endl;


  in.close();
  in_two.close();
  return 0;
  

}
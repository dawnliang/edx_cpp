#include <iostream>

using namespace std;

int main () {
  union numericUnion {
    int intValue;
    long longValue;
    double doubleValue;
  };

  numericUnion myUnion;
  myUnion.intValue = 3;
  cout << "int: " << myUnion.intValue << endl;
  cout << "double: " << myUnion.doubleValue << endl;
  cout << "long: " << myUnion.longValue << endl;
  cout << endl;

  myUnion.doubleValue = 4.5;
  cout << "int: " << myUnion.intValue << endl;
  cout << "double: " << myUnion.doubleValue << endl;
  cout << "long: " << myUnion.longValue << endl;
  cout << endl;

  myUnion.longValue = 8;
  cout << myUnion.intValue << endl;
  cout << myUnion.doubleValue << endl;
  cout << myUnion.longValue << endl;
  cout << endl;
}

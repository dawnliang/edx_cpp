#include <iostream>

using namespace std;

int main() {
  int num = 3;
  int *pNum = &num;

  cout << num << endl;    // 3
  cout << *pNum << endl;  // 3
  cout << &num << endl;   // memory address
  cout << pNum << endl;   // memory address

  *pNum = 45;
  cout << num << endl;    // 45
  cout << *pNum << endl;  // 45
  cout << pNum << endl;   // memory address
}

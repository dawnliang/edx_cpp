#include <iostream>

using namespace std;

int main() {
  int num = 3;
  int &refNum = num;

  cout << "num contains " << num << endl;       // 3
  cout << "refNum contains " << refNum << endl; // 3

  refNum++;

  cout << "num contains " << num << endl;       // 4
  cout << "refNum contains " << refNum << endl; // 4
  cout << "refNum is located at " << &refNum << " and num is located at " << &num << endl; // memory adresses
}

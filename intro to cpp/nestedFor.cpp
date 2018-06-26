#include <iostream>
#include <cmath>

using namespace std;

int main() {
  for (int base = 1; base < 5; base++) {
    cout << "base " << base << ": ";
    for (int exp = 1; exp < 5; exp++) {
      cout << pow(base, exp) << ", ";
    }
    cout << endl;
  }
}

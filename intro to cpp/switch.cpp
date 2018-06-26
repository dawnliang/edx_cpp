#include <iostream>

using namespace std;

int main() {
  char data = 'y';

  switch (data) {
    case 'y' | 'Y' :
      cout << "you chose y or Y" << endl;
      break;
    case 'n' | 'N' :
      cout << "you chose n or N" << endl;
      break;
    default :
      cout << "you didn't choose a valid option" << endl;
      break;
  }
}

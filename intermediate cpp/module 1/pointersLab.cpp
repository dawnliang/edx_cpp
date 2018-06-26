#include <iostream>

using namespace std;

void passByValue(int);
void passByRef(int &num);

class Person
{
private:
  string _name;
  int _age;
  double _height, _weight;

public:
  Person(string name, int age, double height, double weight) {
    _name = name;
    _age = age;
    _height = height;
    _weight = weight;
  }

  string getName() { return _name; }
  int getAge() { return _age; }
  int getHeight() { return _height; }
  int getWeight() { return _weight; }
  void changeName(string name) { _name = name; }
};

void ModifyPerson(Person &p) {
  p.changeName("Mary");
};


int main() {
  int num1 = 3;
  int num2;
  int *pNum = &num2;
  *pNum = 5;

  passByValue(num1);
  cout << "in main" << endl;
  cout << "num1 = " << num1 << endl;

  // passByRef(pNum);
  cout << "in main" << endl;
  cout << "pNum = " << *pNum << endl;
  // will produce an error since sending a pointer (memory address) to a reftype input; trying to take memory address of memory address

  double *dNum = new double;
  *dNum = 35;
  cout << "dNum = " << &dNum << endl;
  delete dNum;
  cout << "dNum = " << &dNum << endl;
  // no errors

  Person p("John", 18, 5.5, 123);
  cout << "Person" << endl;
  cout << "name: " << p.getName() << endl;
  cout << "age: " << p.getAge() << endl;
  cout << "height: " << p.getHeight() << endl;
  cout << "weight: " << p.getWeight() << endl;
  ModifyPerson(p);
  cout << "Person" << endl;
  cout << "name: " << p.getName() << endl;
  cout << "age: " << p.getAge() << endl;
  cout << "height: " << p.getHeight() << endl;
  cout << "weight: " << p.getWeight() << endl;
}

void passByValue(int num) {
  cout << "in passByValue" << endl;

  num++;
  cout << "num = " << num << endl;
}

void passByRef(int &num) {
  cout << "in passByRef" << endl;

  num = 50;
  cout << "num = " << num << endl;
}

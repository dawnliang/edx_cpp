#include <string>
#include <iostream>

#pragma once

using namespace std;

class Person {
private:
  string first_name, last_name, race;
  int age;
protected:
  long phone;
public:
  Person();
  Person(string fname, string lname, int age, string race, long phone);
  virtual ~Person();

  string getName();
  string getRace();
  int getAge();
  long getPhone();

  virtual void OutputAge();

  virtual void OutputIdentity() = 0;
};

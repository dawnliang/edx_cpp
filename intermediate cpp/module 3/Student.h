#include "Person.h"

#pragma once

class Student: public Person {
public:
  Student();
  Student(string fname, string lname, int age, string race, long phone);
  virtual ~Student();

  virtual void OutputIdentity();
  virtual void OutputAge();
};

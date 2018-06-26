#include "Person.h"

#pragma once

class Teacher: public Person {
public:
  Teacher();
  Teacher(string fname, string lname, int age, string race, long phone);
  virtual ~Teacher();

  virtual void OutputIdentity();
  virtual void OutputAge();
};

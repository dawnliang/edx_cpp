#pragma once

#include <string>
#include <iostream>

using namespace std;

class Teacher {
private:
  string fname, lname, address, city;
  int age, phone;

public:
  Teacher();
  Teacher(string fname, string lname, int age, string address, string city, int phone);
  ~Teacher();

  string getName();
  string getAddress();
  int getAge();
  int getPhone();

  void gradeStudent();
  void sitInClass();
};

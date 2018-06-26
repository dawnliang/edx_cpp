#pragma once

#include <string>
#include <iostream>

using namespace std;

class Student {
private:
  string fname, lname, address, city;
  int age, phone;

public:
  Student();
  Student(string fname, string lname, int age, string address, string city, int phone);
  ~Student();

  string getName();
  string getAddress();
  int getAge();
  int getPhone();

  void sitInClass();
};

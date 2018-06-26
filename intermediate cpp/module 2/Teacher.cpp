#include "Teacher.h"

Teacher::Teacher() {
  this -> fname = "Jane";
  this -> lname = "Doe";
  this -> age = 32;
  this -> address = "3984 319th St";
  this -> city = "New York";
  this -> phone = 1384732730;
}

Teacher::Teacher(string fname, string lname, int age, string address, string city, int phone) {
  this -> fname = fname;
  this -> lname = lname;
  this -> age = age;
  this -> address = address;
  this -> city = city;
  this -> phone = phone;
}

Teacher::~Teacher() {

}

string Teacher::getName() {
  return this -> fname + this -> lname;
}

string Teacher::getAddress() {
  return this -> address + this -> city;
}

int Teacher::getAge() {
  return this -> age;
}

int Teacher::getPhone() {
  return this -> phone;
}

void Teacher::gradeStudent() {
  cout << "Student graded" << endl;
}

void Teacher::sitInClass() {
  cout << "Sitting at front of the class" << endl;
}

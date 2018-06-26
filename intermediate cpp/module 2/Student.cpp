#include "Student.h"

Student::Student() {
  this -> fname = "John";
  this -> lname = "Smith";
  this -> age = 10;
  this -> address = "1234 SE 56th St";
  this -> city = "Chicago";
  this -> phone = 1234567890;
}

Student::Student(string fname, string lname, int age, string address, string city, int phone) {
  this -> fname = fname;
  this -> lname = lname;
  this -> age = age;
  this -> address = address;
  this -> city = city;
  this -> phone = phone;
}

Student::~Student() {

}

string Student::getName() {
  return this -> fname + this -> lname;
}

string Student::getAddress() {
  return this -> address + this -> city;
}

int Student::getAge() {
  return this -> age;
}

int Student::getPhone() {
  return this -> phone;
}

void Student::sitInClass() {
  cout << "Sitting at back of class" << endl;
}

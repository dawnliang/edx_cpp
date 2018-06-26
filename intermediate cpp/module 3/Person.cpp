#include "Person.h"

Person::Person() {
  this -> first_name = "John";
  this -> last_name = "Smith";
  this -> age = 18;
  this -> race = "Asian";
  this -> phone = 1234567890;
}

Person::Person(string fname, string lname, int age, string race, long phone) {
  this -> first_name = fname;
  this -> last_name = lname;
  this -> age = age;
  this -> race = race;
  this -> phone = phone;
}

Person::~Person() {

}

string Person::getName() {
  return first_name + last_name;
}

string Person::getRace() {
  return race;
}

int Person::getAge() {
  return age;
}

long Person::getPhone() {
  return phone;
}

void Person::OutputAge() {
  cout << "I am " << this -> age << " years old" << endl;
}

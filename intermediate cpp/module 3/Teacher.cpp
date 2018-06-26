#include "Teacher.h"

Teacher::Teacher():Person() {

}

Teacher::Teacher(string fname, string lname, int age, string race, long phone):Person(fname, lname, age, race, phone) {

}

Teacher::~Teacher() {

}

void Teacher::OutputIdentity() {
  cout << "I am a teacher" << endl;
}

void Teacher::OutputAge() {
  Teacher::OutputIdentity();
  Person::OutputAge();
}

#include "Student.h"

Student::Student():Person() {

}

Student::Student(string fname, string lname, int age, string race, long phone):Person(fname, lname, age, race, phone) {

}

Student::~Student() {

}

void Student::OutputIdentity() {
  cout << "I am a student" << endl;
}

void Student::OutputAge() {
  Student::OutputIdentity();
  Person::OutputAge();
}

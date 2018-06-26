#include "Course.h"

Course::Course() {
  this -> name = "Class 101";
  this -> s[0] = Student();
  this -> s[1] = Student();
  this -> s[2] = Student();
  this -> t = Teacher();
}

void Course::setName(string newName) {
  this -> name = newName;
}

string Course::getName() {
  return this -> name;
}

void Course::addStudent(Student s, int index) {
  this -> s[index] = s;
}

void Course::addTeacher(Teacher t) {
  this -> t = t;
}

Course::Course(string name, Student s1, Student s2, Student s3, Teacher t) {
  this -> name = name;
  this -> s[0] = s1;
  this -> s[1] = s2;
  this -> s[2] = s3;
  this -> t = t;
}

Course::~Course() {

}

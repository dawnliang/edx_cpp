#pragma once

#include <string>
#include "Student.h"
#include "Teacher.h"

class Course {
private:
  Teacher t;
  Student s [3];
  string name;

public:
  Course();
  Course(string name, Student s1, Student s2, Student s3, Teacher t);
  ~Course();

  void setName(string newName);
  string getName();
  void addStudent(Student s, int index);
  void addTeacher(Teacher t);
};

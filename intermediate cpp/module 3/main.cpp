#include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main() {
  Student s1 = Student("Jane", "Doe", 17, "Ethiopian", 1284424937);
  s1.OutputAge();
  Teacher t = Teacher("Henry", "Adams", 38, "Indian", 1847220483);
  t.OutputAge();
}

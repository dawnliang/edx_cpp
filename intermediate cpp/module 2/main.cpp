#include "Student.h"
#include "Teacher.h"
#include "Course.h"

int main() {
  Student s1 = Student("Jacob", "Wagner", 20, "3938 NE 54th St", "Seattle", 1328139941);
  Student s2 = Student("Sydney", "Noel", 22, "4277 NE 42nd St", "Seattle", 1838238473);
  Student s3 = Student("Carly", "Braker", 21, "1387 NE 62nd St", "Seattle", 1874372984);

  Course c = Course("Intermediate C++", s1, s2, s3, Teacher());

  Teacher t = Teacher("Harriet", "Jones", 39, "93848 NE 384th St", "Seattle", 1384873910);

  c.addTeacher(t);

  cout << c.getName() << endl;
  t.gradeStudent();
}

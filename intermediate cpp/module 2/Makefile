CC = g++

CourseTest: main.o Course.o Student.o Teacher.o
	$(CC) $(CFLAGS) -o CourseTest main.o Course.o Student.o Teacher.o

main.o: main.cpp
	$(CC) -c main.cpp

Course.o: Course.cpp
	$(CC) -c Course.cpp

Student.o: Student.cpp
	$(CC) -c Student.cpp

Teacher.o: Teacher.cpp
	$(CC) -c Teacher.cpp

clean:
	rm -f core *.o

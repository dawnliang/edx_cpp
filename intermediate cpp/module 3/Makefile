CFLAGS = -o
CC = g++
SRC = main.cpp Person.cpp Student.cpp Teacher.cpp
OBJ = $(SRC:.cpp = .o)

main: $(OBJ)
	$(CC) $(CFLAGS) main $(OBJ)

objects: $(SRC)
	$(CC) -c $(SRC)

clean:
	rm -f core *.o

W_FLAGS = -Wall -Wextra -g 

# firstly
output: main.o Person.o Student.o
		g++ -std=c++11 $(W_FLAGS) main.o Person.o Student.o -lm -o output

# needs -c flag
main.o: main.cpp
		g++ -std=c++11 $(W_FLAGS) -c main.cpp

# need -c flag
Person.o: Person.h Person.cpp
		g++ -std=c++11 $(W_FLAGS) -c Person.cpp

# need -c flag
Student.o: Student.h Student.cpp
		g++ -std=c++11 $(W_FLAGS) -c Student.cpp

#clean:
#		rm *.o 

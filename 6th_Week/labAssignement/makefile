W_FLAGS = -Wall -Wextra -g 

# firstly
output: main.o Course.o Teacher.o Student.o 
		g++ -std=c++11 $(W_FLAGS) main.o Course.o Teacher.o Student.o -lm -o output

# needs -c flag
main.o: main.cpp
		g++ -std=c++11 $(W_FLAGS) -c main.cpp

# need -c flag
Course.o: Course.h Course.cpp
		g++ -std=c++11 $(W_FLAGS) -c Course.cpp

# need -c flag
Teacher.o: Teacher.h Teacher.cpp
		g++ -std=c++11 $(W_FLAGS) -c Teacher.cpp

# need -c flag
Student.o: Student.h Student.cpp
		g++ -std=c++11 $(W_FLAGS) -c Student.cpp

#clean:
#		rm *.o 

W_FLAGS = -Wall -Wextra -g 

# firstly
output: MathTest.o Math.o
		g++ -std=c++11 $(W_FLAGS) MathTest.o Math.o -lm -o output

# needs -c flag
MathTest.o: MathTest.cpp
		g++ -std=c++11 $(W_FLAGS) -c MathTest.cpp

# need -c flag
Math.o: Math.h Math.cpp
		g++ -std=c++11 $(W_FLAGS) -c Math.cpp

#clean:
#		rm *.o 

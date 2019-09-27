#include <iostream>

// var declaration
// We tell the compiler that this var will be
// defined somewhere
// if we compile without defining (or initializing) we will see no problem
extern int i;

// global var definition!!
int g;

// global variable initiliazation
int l = 5;



void fun(){
  std::cout << "g is in scope also from here! g is: " << g << std::endl;
}

int main(){
  // var definition
  // it will not compile unless we initialize it
  int i;

  // var initialization
  i = 7;
  std::cout << "i is: " << i << std::endl;

  // global var init
  g = 4;
  std::cout << "g is: " << g << std::endl;
  // call fun
  fun();
  
  // local scope
  int l = 10;

  // We see that local scope has priority over
  // global scope
  std::cout << "l is: " << l << std::endl;


  return 0;
}

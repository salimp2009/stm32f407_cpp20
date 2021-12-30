# stm32f407_cpp20
Micro Controller Project using STM32F407G Discovery (DISC1) Board with cpp
Create MCU related files with STM32CubeMX and used CLion to create a CMake file to be able to use both C and Cpp+17 or C++20
CMAKE uses C++17 currently; will be changed to C++20
Revised the main() function in C file main.c as UserLoop()
Created a C++ main.cpp and created a main() function declared
  // this is a function declared in C file and used in C++ main
  extern "C" int UserLoop(void);
Also defined A C++ function as an extern C so it can be called inside the C file UserLoop() to test and called this function 
in C file inside the UserLoop(); this will let us to do our state machine or other applications in C++17 or C++20 and return the results
into C function so that we can communicate with the Chip; e.g. to turn on the led we can use C++ state machine and return the action to C
   extern "C" void printTest(int var)
  {
      printf("test print val: %i", var);
  }
  

#include <stdio.h>
#include "Screen.h"

int main(int argc, char* argv[])
{
  printf("Pompei -- a test in game scripting.\n");

  printf("Initialization\n");
  Screen* theScreen = new Screen("Pompei !\n");

  printf("Entering game loop\n");

  printf("Cleaning up\n");

  printf("Good bye !\n");
  return 0;
}

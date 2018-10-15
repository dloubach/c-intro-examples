/*
 * Library usage example
 * author: dloubach
 * 
 * 
 * :: first, create the object file :
 * $ gcc -c main-lib.c -o main-lib.o
 * :: or use the make utility
 * $ make all
 */

#include "libmine.h"

int main(int argc, char* argv[])
{
  char cMyStr[10] = {'H','e','l','l','o','\0'};

  // call the function inside the library
  library_printString(cMyStr);

  return 0;
}

/*
 * Source file which will became a library
 * 
 * :: how to create the .a 
 * $ gcc -c libmine.c -o libmine.o
 * $ ar rcs libmine.a libmine.o
 * 
 * :: how to statically link (options -L and -l) with main-lib
 * -L is to indicate a 'non-standard' path
 * -l is to indicate the library's name, it assume the name starting with 'lib' and ending with '.a'
 * $ gcc main-lib.o -L. -lmine -o main-lib
 *
 * author: dloubach
 */

#include "libmine.h"
#include <stdio.h>

void library_printString(const char* cMyStr)
{
  printf("%s\n", cMyStr);
}

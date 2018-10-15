/* Function pointer example
 *
 * how to compile
 * $ gcc fp.c -o fp
 * how to run
 * $ ./fp
 *
 * author: dloubach
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_OPCODE_RANGE 20
#define ADD 10
#define SUB 20


int fAdd(int);
int fSub(int);
void fHardCodedMapping(int*);

int main(int argc, char* argv[])
{
  int (*fPointer[])(int) = {fAdd, fSub}; // vector of function pointer
													  // declaration and initialization
  int iMapping[MAX_OPCODE_RANGE];        // mapping
  int iResult;
  int i;
 
  printf("*** Vector of function pointer GREAT example ***\n");

  // make the wirings
  fHardCodedMapping(iMapping);

  // start using, example
  for(i=10; i<=20; i+=10)
  {
	 iResult = (*fPointer[iMapping[i]])(2);
	 printf("Result: %d\n", iResult);
  }
  
  return 0;
}

int fAdd(int iParam)
{
  return 0 + iParam;
}

int fSub(int iParam)
{
  return 0 - iParam;
}

void fHardCodedMapping(int* iMap)
{
  // hard coded mapping :(
  // many position will not use used :(
  iMap[ADD] = 0;
  iMap[SUB] = 1;
}

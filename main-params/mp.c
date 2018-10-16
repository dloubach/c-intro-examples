/* Main's parameters example
 * argument count and argument vector
 * 
 * how to compile
 * $ gcc mp.c -o mp
 *
 * how to run
 * $ ./mp hi this is a test
 *
 * other forms for declaring 'main'
 * 1 - void main(int argc, char* argv[]) -- needs explict call to 'exit', eg, exit(0)
 * 2 - void main(void)                   -- needs explict call to 'exit', eg, exit(0)
 * 3 - int main(void)                    -- needs a call to 'return', eg, return 0;
 *
 * author: dloubach
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  int i;
  
  printf("argc: %d\n", argc);
  for(i=0; i<argc; i++)
  {
	 printf("argv[%d]: %s\n", i, argv[i]);
  }

  return 0;
}

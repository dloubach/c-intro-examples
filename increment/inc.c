/* Post and pre increment
 * 
 * how to compile
 * $ gcc inc.c -o inc
 *
 * how to run
 * $ ./inc
 *
 * author: dloubach
 */

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  int i=0, j=0;
  printf("Post and pre increment GREAT example\n\n");

  j = i++;
  printf("POST:\t i: %d AND j: %d\n\n", i, j);

  j = ++i;
  printf("PRE:\t i: %d AND j: %d\n", i, j);

  printf("\nPOST':\t i++: %d AND j++: %d\n", i++, j++);
  printf("after\t i: %d AND j: %d\n", i, j);

  printf("\nPRE':\t ++i: %d AND ++j: %d\n", ++i, ++j);
  printf("after\t i: %d AND j: %d\n", i, j);

  printf("\nNow using the decrement (--)\n");

  printf("\nPOST':\t i--: %d AND j--: %d\n", i--, j--);
  printf("after\t i: %d AND j: %d\n", i, j);

  printf("\nPRE':\t --i: %d AND --j: %d\n", --i, --j);
  printf("after\t i: %d AND j: %d\n", i, j);

  exit(0);
}

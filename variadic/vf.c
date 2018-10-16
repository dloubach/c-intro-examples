/* Variadic function example 
 * This functions can take a variable number of 
 * arguments, do you know 'printf' ?  :)
 *
 * Source: 
 * https://www.gnu.org/savannah-checkouts/gnu/libc/manual/html_node/Variadic-Functions.html
 *
 * how to compile
 * $ gcc vf.c -o vf
 *
 * how to run
 * $ ./vf
 *
 * author: dloubach
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void simplePrint(int, ...);


void main(void)
{
  printf("Variadic function example\n");

  simplePrint(4, 2,3,4,5);
  printf("\n");

  simplePrint(10, 1,2,3,4,5,6,7,8,9,10);
  printf("\n");

  exit(0);
}

void simplePrint(int iTotal, ...)
{
  int i, iValue;
  va_list vlArgs;

  /* void va_start(va_list ap, last); 
	* Initializes <ap> for subsquement use by
	* va_arg() and va_end() The argument <last> is the name of the last argument
	* before the variable argument list, i.e., the last argument of which the
	* calling function knows the type
	* ap == argument pointer variable
	*/
  va_start(vlArgs, iTotal);

  for(i=0; i<iTotal; i++)
  {
	 /* type va_arg(va_list ap, type); 
	  * Expands to an expression that has the type
	  * and value of the next argu‐ ment in the call. The argument <ap> is the
	  * <va_list ap> initialized by va_start() Each call to va_arg() modifies
	  * <ap> so that the next call returns the next argument.
	  */
	 iValue = va_arg(vlArgs, int);
	 printf("%d ", iValue);
  }

  /* void va_end(va_list ap); 
	* Each invocation of va_start() must be matched by a
	* corresponding invocation of va_end() in the same function
	* After the call va_end(ap) the variable <ap> is undefined.
	*/
  va_end(vlArgs);

}

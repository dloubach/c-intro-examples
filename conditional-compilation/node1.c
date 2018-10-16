/* Conditional compilation example
 * author: dloubach
 */

#include <stdio.h>
#include "node1.h"

void node_Func(list_t myList)
{
  if(myList->prox != NULL)
	 printf("Element %d from file node1.c\n", myList->prox->elem);
}

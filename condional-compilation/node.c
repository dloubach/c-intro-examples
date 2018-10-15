/* Conditional compilation example
 * author: dloubach
 */

#include <stdio.h>
#include "node.h"

void node_Func(list_t myList)
{
  if(myList->prox != NULL)
	 printf("Element %d\n", myList->prox->elem);
}

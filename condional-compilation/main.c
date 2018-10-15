/* Conditional compilation example
 * 
 * ::how to compile for node1
 * $ gcc -DNODE1 main.c node1.c -o node
 *
 * how to compile for node
 * $ gcc -DNODE main.c node.c -o node
 *
 * how to run
 * $ ./node
 *
 * author: dloubach
 */  

#include <stdio.h>
#include <stdlib.h>

#ifdef NODE
#include "node.h"
#endif
#ifdef NODE1
#include "node1.h"
#endif

int main(int argc, char* argv[])
{
  list_t myL;

  printf("Conditional compilation example\n");

  myL = (list_t) malloc(sizeof(struct node_st));
  myL->prox = (list_t) malloc(sizeof(struct node_st));
  myL->prox->elem = 10;
  
  node_Func(myL);
  
  return 0;
  
}

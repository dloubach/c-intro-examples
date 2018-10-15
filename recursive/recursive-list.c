/* Recursive list printing example
 *
 * how to compile
 * $ gcc recursive-list.c -o list
 * how to run
 * $ ./list
 *
 * author: dloubach
 */

#include <stdio.h>
#include <stdlib.h>


struct node_st{
  int elem;
  struct node_st* prox;
};

typedef struct node_st* list_t;
typedef struct node_st* position_t;

void printList(list_t l){
  if(l->prox != NULL)
  {
    printf("%d ", l->prox->elem);
	 printList(l->prox);
  }
}

void printListReversed(list_t l){
  if(l->prox != NULL)
  {
	 printList(l->prox);
    printf("%d ", l->prox->elem);

  }
}

int main(void)
{
  int i;
  list_t L;
  position_t p;

  /* sentinel node */
  L = (list_t) malloc(sizeof(list_t));

  p = L;
  for(i=0; i<3; i++){
	 p->prox = (list_t) malloc(sizeof(list_t));
	 p->prox->elem = i;
	 p = p->prox;
  }
    
  printf("Hello, World -- Recursive list printing!\n");
  printList(L);
  printf("\nDone !\n");

  printf("\nand now, reversed!\n");
  printListReversed(L);
  printf("\nDone !\n");

  return 0;
}

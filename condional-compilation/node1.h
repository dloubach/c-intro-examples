/* Conditional compilation example
 * author: dloubach
 */

#ifndef _NODE1_H
#define _NODE1_H

typedef struct node_st* list_t;

struct node_st
{
  int elem;
  struct node_st* prox;
};

void node_Func(list_t);

#endif

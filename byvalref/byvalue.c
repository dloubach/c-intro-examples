/* Example showing the parameters passage by reference and 
 * also by value. By running the example, the differences
 * explain how these techniques behave.
 * 
 * how to compile
 * $ gcc byvalue.c -o byvalue
 * how to run
 * $ ./byvalue
 *
 * author: dloubach
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct myStruct_st* byRef_t;
typedef struct myStruct_st  byValue_t;

struct myStruct_st
{
  char a[4];
};

void fooRef(byRef_t myChar){
  myChar->a[0] = 'X';
  printf("inside function: %s\n", myChar->a);
}

void fooValue(byValue_t myChar){
  myChar.a[0] = 'X';
  printf("inside function: %s\n", myChar.a);
}

int main(int argc, char* argv[])
{
  byRef_t myOther;
  byValue_t myOther2;
	 
  printf("By REFERENCE example, vector parameter usage\n");
  myOther = (byRef_t) malloc(sizeof(byRef_t));
  myOther->a[0] = 'A';
  myOther->a[1] = 'B';
  myOther->a[2] = 'C';
  myOther->a[3] = 'D';
  
  printf("before: %s\n", myOther->a);
  fooRef(myOther);
  printf("after: %s\n\n", myOther->a);


  printf("By VALUE example, vector parameter usage\n");
  myOther2.a[0] = 'A';
  myOther2.a[1] = 'B';
  myOther2.a[2] = 'C';
  myOther2.a[3] = 'D';
  
  printf("before: %s\n", myOther2.a);
  fooValue(myOther2);
  printf("after: %s\n", myOther2.a);

  return 0;
}

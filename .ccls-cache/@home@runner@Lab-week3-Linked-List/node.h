#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
  int id;
  char name[50];
  struct node *next;
}NODE;
typedef NODE* NodePtr;
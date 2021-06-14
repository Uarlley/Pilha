#include <stdio.h>
#include <stdlib.h>
 typedef struct tnode{
     struct tnode* next;
     int info;
 }node;

 typedef struct{
     node* head;
     int size;
 }stack;
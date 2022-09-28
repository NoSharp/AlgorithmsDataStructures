#include <stdlib.h>

#define STACK_SUCCESS 0
#define STACK_LENGTH_ZERO 1

typedef struct {
  void* data;
  struct StackItem* next_item;
} StackItem;

typedef struct {
  int len;
  StackItem* head;
} Stack;


void push(Stack* stack, void* data);
int pop(Stack* stack, void** out_data);
int peek(Stack* stack, void** out_data);
int length(Stack* stack);
Stack* make_stack();
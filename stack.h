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


void stack_push(Stack* stack, void* data);
int stack_pop(Stack* stack, void** out_data);
int stack_peek(Stack* stack, void** out_data);
int stack_length(Stack* stack);
Stack* make_stack();
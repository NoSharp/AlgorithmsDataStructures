#include "stack.h"


void stack_push(Stack* stack, void* data){
  StackItem* item = (StackItem*)malloc(sizeof(StackItem));
  item->data = data;
  StackItem* cur_head = stack->head;
  item->next_item = cur_head;

  stack->head = item;
  stack->len++;
}

int stack_peek(Stack* stack, void** out_data){
  if(stack->head == NULL || stack->len == 0){
    return STACK_LENGTH_ZERO;
  }
  *out_data = stack->head->data;
  return STACK_SUCCESS;
}

int stack_pop(Stack* stack, void** out_data){
  int err = peek(stack, out_data);
  if(err > 0){
    return err;
  }
  stack->len--;
  StackItem* s_e = stack->head;
  stack->head = s_e->next_item;
  free(s_e);
}

int stack_length(Stack* stack){
  return stack->len;
}

Stack* make_stack(){
  Stack* stack = (Stack*)malloc(sizeof(Stack));
  stack->len = 0;
  stack->head = NULL;
  return stack;
}
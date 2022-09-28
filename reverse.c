#include "reverse.h"
#include <stdio.h>
Stack* reverse_queue(Queue* queue){
  Stack* stack = make_stack();
  
  QueueElement* elem = queue->head;
  stack_push(stack, queue->head->content);
  for(int i = 1; i < queue->len; i++){
    QueueElement* next_element = (QueueElement*)elem->next_element;
    stack_push(stack, next_element->content);
    elem = elem->next_element;
  }

  return stack;
}
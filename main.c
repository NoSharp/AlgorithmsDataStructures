// #include "queue.h"
#include "stack.h"
#include <stdio.h>

int main(){
  // printf("[Testing Queues]");
  // Queue* q = make_queue();
  // int val = 1;
  // enqueue(q, &val);
  // int val2 = 123;
  // enqueue(q, &val2);
  // int val3 = 1234;
  // enqueue(q, &val3);
  // int err = 0;
  // int* data = 0;
  // err = dequeue(q,(void**)&data);
  // printf("\nData: %d err: %d q_len: %d", *data, err, q->len);
  // err = dequeue(q,(void**)&data);
  // printf("\nData: %d err: %d q_len: %d", *data, err, q->len);
  // int peek_data = *(int*)peek(q);
  // printf("\nData: %d len: %d", peek_data, length(q));
  printf("[Testing Stacks]\n");
  Stack* s = make_stack();
  int data = 10;
  push(s, &data);
  int data2 = 15;
  push(s, &data2);
  int* n_data = 0;
  int err = pop(s, &n_data);
  printf("Data: %d Err: %d Len:%d\n", *n_data, err, s->len);
  int* n_data_2 = 0;
  int err2 = pop(s, &n_data_2);
  printf("Data: %d Err: %d Len:%d\n", *n_data_2, err2, s->len);
}
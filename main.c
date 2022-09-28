#include "queue.h"
#include <stdio.h>

int main(){
  printf("[Testing!!]");
  Queue* q = make_queue();
  int val = 1;
  enqueue(q, &val);
  int val2 = 123;
  enqueue(q, &val2);
  int val3 = 1234;
  enqueue(q, &val3);
  int err = 0;
  int* data = 0;
  err = dequeue(q,(void**)&data);
  printf("\nData: %d err: %d q_len: %d", *data, err, q->len);
  err = dequeue(q,(void**)&data);
  printf("\nData: %d err: %d q_len: %d", *data, err, q->len);
  int peek_data = *(int*)peek(q);
  printf("\nData: %d len: %d", peek_data, length(q));
}
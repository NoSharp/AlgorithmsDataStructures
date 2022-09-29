#include "circular_queue.h"

int circular_queue_dequeue(CircularQueue* queue, void** out){
  if ( queue->len == 0){
    return QUEUE_LENGTH_ZERO;
  }

  CircularQueueElement* element = queue->head;
  queue->head = element->next_element;
  queue->len--;

  *out = element->content;
  free(element);
  return QUEUE_SUCCESS;
}

void circular_queue_enqueue(CircularQueue* queue, void* data){
  
  CircularQueueElement* element = (CircularQueueElement*)malloc(sizeof(CircularQueueElement));
  element->content = data;
  if(queue->head == NULL)  
  {
    queue->head = element;
  }
  element->next_element = queue->head;
  if(queue->tail != NULL){
    queue->tail->next_element = element;
  }
  queue->tail = element;
  queue->len++;
}

int circular_queue_length(CircularQueue* queue){
  return queue->len;
}

void* circular_queue_peek(CircularQueue* queue){
  CircularQueueElement* head = queue->head;
  if(head == NULL || queue->len == 0){
    return NULL;
  }
  return head->content;
}

CircularQueue* make_circular_queue(){
  CircularQueue* q = (CircularQueue*)malloc(sizeof(CircularQueue));
  q->head = NULL;
  q->len = 0;
  q->tail = NULL;
  return q;
}
#include "queue.h"

int dequeue(Queue* queue, void** out){
  if ( queue->len == 0){
    return QUEUE_LENGTH_ZERO;
  }

  QueueElement* element = queue->head;
  queue->head = element->next_element;
  queue->len--;

  *out = element->content;
  free(element);
  return QUEUE_SUCCESS;
}

void enqueue(Queue* queue, void* data){
  
  QueueElement* element = (QueueElement*)malloc(sizeof(QueueElement));
  element->content = data;
  element->next_element = NULL;
  if(queue->head == NULL)  
  {
    queue->head = element;
  }
  if(queue->tail != NULL){
    queue->tail->next_element = element;
  }
  queue->tail = element;
  queue->len++;
}

int length(Queue* queue){
  return queue->len;
}

void* peek(Queue* queue){
  QueueElement* head = queue->head;
  if(head == NULL || queue->len == 0){
    return NULL;
  }
  return head->content;
}

Queue* make_queue(){
  Queue* q = (Queue*)malloc(sizeof(Queue));
  q->head = NULL;
  q->len = 0;
  q->tail = NULL;
  return q;
}
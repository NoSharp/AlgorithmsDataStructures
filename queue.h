#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SUCCESS 0
#define QUEUE_LENGTH_ZERO 1

/**
 * Written by Harry Kerr for a University Assignment
 * Below is a quick and easy queue library.
 * MIT LICENSE
 */

typedef struct {
  void* content;
  struct QueueElement* next_element;
} QueueElement;

typedef struct {
  size_t len;
  QueueElement* head;
  QueueElement* tail;
} Queue;

int dequeue(Queue* queue, void** out);

void enqueue(Queue* queue, void* data);

int length(Queue* queue);

void* peek(Queue* queue);

Queue* make_queue();
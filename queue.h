#ifndef QUEUE_H
#define QUEUE_H

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

int queue_dequeue(Queue* queue, void** out);

void queue_enqueue(Queue* queue, void* data);

int queue_length(Queue* queue);

void* queue_peek(Queue* queue);

Queue* make_queue();

#endif
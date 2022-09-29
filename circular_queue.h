#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

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
  struct CircularQueueElement* next_element;
} CircularQueueElement;

typedef struct {
  size_t len;
  CircularQueueElement* head;
  CircularQueueElement* tail;
} CircularQueue;

int circular_queue_dequeue(CircularQueue* queue, void** out);

void circular_queue_enqueue(CircularQueue* queue, void* data);

int circular_queue_length(CircularQueue* queue);

void* circular_queue_peek(CircularQueue* queue);

CircularQueue* make_circular_queue();

#endif
#include <stdio.h>

#include <stdlib.h>

int A[100000];
int size = 0;
struct node {
  int val;
  struct node * next;
};
void Insert(struct node ** head, int value) {
  if (A[value] == 0) {
    struct node * new_node = NULL;
    new_node = (struct node * ) malloc(sizeof(struct node));
    if (new_node == NULL) {
      printf("Failed to insert element.Out of memory");
      return;
    }
    new_node -> val = value;
    new_node -> next = * head;* head = new_node;
    A[value] = 1;
  }
}
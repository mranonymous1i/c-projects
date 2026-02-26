#ifndef LINKED_LIST_H
#define LINKED_LIST_H

//Node struct, representing each node of the linked list
typedef struct Node{
  int data;
  struct Node *next;
} Node;

//Function declarations

int list_extract(Node** list, int requested);
int list_search(Node** list, int requested);
void insert_head(Node** list, int data);
void insert_tail(Node** list, int data);
void print_list(Node** list);

#endif
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

//Node struct, representing each node of the linked list
typedef struct Node{
  char* key;
  struct Node* next;
} Node;

//Function declarations

int list_extract(Node** list, const char word[]);
int list_search(Node* list, const char word[]);
void insert_head(Node** list,const char word[]);
void insert(Node** list, const char word[]);
void print_list(Node* list);

#endif
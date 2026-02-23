#include "linked_lists.h"
#include <stdio.h>
#include <stdlib.h>

//searches the list to find the first node with the requested data in it and returns 1. If no node with the appropriate data exists, it returns -1.
int search(Node** list, int requested){
  Node *current = *list;
  while(current != NULL){
    if(current->data == requested) return 1;
    current = current->next;
  }
  return -1;
}
//extract function removes the first instance of a node with the matching requested data in it if it exists, returning 1, otherwise returns -1.
int extract(Node** list, int requested){
  
  Node *current = *list;
  Node *temp = NULL;

  while(current != NULL){
    if(current->data == requested){
      if(temp == NULL){
        Node* new_list = current->next;
        free(current);
        *list = new_list;
        return 1;
      }
      else{
        temp->next = current->next;
        free(current);
        return 1;
      }
    }
    temp = current;
    current = current->next;
  }
  return -1;
}

//inserts a node as the new head of the linked list with the given data.
void insert_head(Node** list, int data){
  Node *new_list = malloc(sizeof(Node));
  new_list->data = data;
  new_list->next = *list;
  *list = new_list;
}

//inserts a node at the end of the linked list with the given data.
void insert_tail(Node** list, int data){
  Node *current = *list;
  Node *new_node = malloc(sizeof(Node));
  new_node->data = data;
  new_node->next = NULL;

  if(list == NULL) *list = new_node;

  while(current->next != NULL){
    current = current->next;
  }
  current->next = new_node;
}

//prints all the data stored in the nodes of the linked list.
void print_list(Node** list){
  Node *current = *list;

  if(current == NULL) printf("No data stored in linked list\n");

  else{
    printf("The data stored in the list: { ");
    while(current != NULL){
      printf("%d ", current->data);
      current = current->next;
    }
    printf("}\n");
  }
}
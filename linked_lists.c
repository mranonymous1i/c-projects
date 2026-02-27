#include "linked_lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//searches the list to find the first node with the requested key in it and returns 1. If no node with the appropriate key exists, it returns -1.
int list_search(Node* list, const char requested[]){
  Node *current = list;

  while(current != NULL){

    if(strcmp(current->key, requested) == 0) return 1;
    
    current = current->next;
  }
  return -1;
}
//extract function removes the first instance of a node with the matching requested key in it if it exists, returning 1, otherwise returns -1.
int list_extract(Node** list, const char requested[]){
  
  Node *current = *list;
  Node *prior = NULL;

  while(current != NULL){
    if(strcmp(current->key, requested) == 0){

      if(prior == NULL) 
        *list = current->next;
      else 
        prior->next = current->next;
  
      free(current->key);  
      free(current);
      return 1;
    }
    prior = current;
    current = current->next;
  }
  return -1;
}

//inserts a node as the new head of the linked list with the given key.
void insert_head(Node** list, const char word[]){
  Node *new_node = malloc(sizeof(Node));
  new_node->key = strdup(word);
  new_node->next = *list;
  *list = new_node;
}

//inserts a node at the end of the linked list with the given key.
void insert(Node** list, const char word[]){
  Node *current = *list;
  Node *new_node = malloc(sizeof(Node));
  new_node->key = strdup(word);
  new_node->next = NULL;

  if(*list == NULL){
    *list = new_node;
    return;
  }

  while(current->next != NULL){
    current = current->next;
  }
  current->next = new_node;
}

//prints all the key stored in the nodes of the linked list.
void print_list(Node* list){
  Node* current = list;

  if(current == NULL) printf("No key stored in linked list\n");

  else{
    printf("The keys stored in the list: { ");
    while(current != NULL){
      printf("%s ", current->key);
      current = current->next;
    }
    printf("}\n");
  }
}
#include "hashmaps.h"
#include "linked_lists.h"
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void){
  Node *linkedList[SIZE];
  return 0;
}

//This is the hash function based on which data is calculated for appropriate storage and indexing
int hash(char word[]){
  int res = 0;
  for(int i = 0; word[i] != '\0'; i++){
    res += word[i];
  }
  return res;
}

//Using list_search, searches for the desired word in the hashmap. Returns 1 if it exists, and -1 is if does not;
int hash_search(Node* list[], char word[]){
  return list_search(list[hash(word) % 10], word);
}

//Extracts the requested data from the hashmap using list_extract. If the data exists, it is removed and returns 1. If not, it returns -1;
int hash_extract(Node* list[], char word[]){
  return list_extract(&list[hash(word) % 10], word);
}

//Inserts a data value if it does not exist already into the hashmap
void hash_insert(Node* list[], char word[]){
  if(hash_search(list[hash(word) % 10], word) != 1)
    insert(&list[hash(word) % 10], word);
}
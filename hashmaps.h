#ifndef HASHMAPS_H
#define HASHMAPS_H
#include "linked_lists.h"
  typedef struct Hashmap{
    Node** table;
    int size;
  } Hashmap;

  int hash(char word[]);
  int hash_search(Hashmap* table, char word[]);
  int hash_extract(Hashmap* table, char word[]);
  void hash_insert(Hashmap* table, char word[]);
#endif
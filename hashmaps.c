#include "hashmaps.h"
#include <stdio.h>
#include <stdlib.h>

//This is the hash function based on which data is calculated for appropriate storage and indexing
int hash(char word[]){
  int res = 0;
  for(int i = 0; word[i] != '\0'; i++){
    res += word[i];
  }
  return res;
}

//Using list_search, searches for the desired word in the hashmap. Returns 1 if it exists, and -1 is if does not;
int hash_search(Hashmap* map, char word[]){
  return list_search(map->table[hash(word) % map->size], word);
}

//Extracts the requested data from the hashmap using list_extract. If the data exists, it is removed and returns 1. If not, it returns -1;
int hash_extract(Hashmap* map, char word[]){
  return list_extract(&map->table[hash(word) % map->size], word);
}

//Inserts a data value if it does not exist already into the hashmap
void hash_insert(Hashmap* map, char word[]){
  if(hash_search(map, word) != 1)
    list_insert(&map->table[hash(word) % map->size], word);
}
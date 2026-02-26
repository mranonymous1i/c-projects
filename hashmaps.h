#ifndef HASHMAPS_H
#define HASHMAPS_H
  #define SIZE 10

  int hash(char word[]);
  int hash_search(Node** list[SIZE], char word[]);
  int hash_extract(Node** list[SIZE], char word[]);
  void hash_insert(Node** list[SIZE], char word[]);
#endif
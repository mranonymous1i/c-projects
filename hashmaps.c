#include "hashmaps.h"
#include "linked_lists.h"
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void){
  Node *linkedList[SIZE];
  return 0;
}

int hash(char word[]){
  int res = 0;
  for(int i = 0; word[i] != '\0'; i++){
    res += word[i];
  }
  return res;
}

int search(Node list[SIZE], char word[]){
  int data = hash(word);
  int index = data % 10;

  
}

int remove(char word[]){

}
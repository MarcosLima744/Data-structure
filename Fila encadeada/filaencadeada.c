#include <stdio.h>
#include <stdlib.h>
#include "filaencadeada.h"

typedef struct no {
  int key;
  struct no *pre;
} no;

typedef struct queue{
  no *first, *last;
}queue;

void *createQueue(){
 queue *q;

 q              = (queue *)malloc(sizeof(queue));
 q->first       = (no *)malloc(sizeof(no));
 q->last        = (no *)malloc(sizeof(no));
 q->first->pre  = NULL;
 q->last->pre   = NULL;
 return (void *)q;
}

void deleteQueue(void *Q){
  queue *Qi = (queue *)Q;
  while(!empty(Qi)){
      int temp = enqueue(Qi->first);
  }
  free(Qi->first);
  free(Qi->last);
  free(Qi);
}

void insert(void *Q, int k){
  queue *Qi = (queue *)Q;
  no *x;

  x      = (no *)malloc(sizeof(no));
  x->key = k;
  
  if(empty(Qi)){
    Qi->first->pre = x;
  }
  else{
    Qi->last->pre = x; 
  }
  
  Qi->last      = x;
  Qi->last->pre = NULL;
}

int enqueue(void *Q){
  queue *Qi = (queue *)Q;
  if(empty(Qi)){
    return -1;
  }
  no *temp;
  temp           = Qi->first->pre;
  Qi->first->pre = temp->pre;
  
  return temp->key;
  free(temp);
}


int empty(void *Q){
  queue *Qi = (queue *)Q;
  return (Qi->first->pre == NULL); 
}

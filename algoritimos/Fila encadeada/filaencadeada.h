#ifndef LISTA_ENCADEADA
#define LISTA_ENCADEADA

void *createQueue();

void deleteQueue(void *Q);

void insert(void *Q, int k);

int enqueue(void *Q);

int empty(void *Q);


#endif
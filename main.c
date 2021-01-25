#include <stdio.h>
#include "filaencadeada.h"


int main(){
  void *Q;
  
  Q = createQueue();
  
  int i = 1;
  while(i){
    scanf("%d",&i);
    insert(Q, i);
  }
  while(!empty(Q))
    printf("%d ", enqueue(Q));


  return 0;
}
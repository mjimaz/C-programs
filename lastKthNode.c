#include <stdio.h>
#include <stdlib.h>

struct Node * lastKthNode(struct Node *list, int k);

struct Node {
  int num;
  struct Node *next;
};

int main(){
  struct Node *head = (struct Node *) malloc(sizeof(struct Node));
  struct Node *temp, *current;
  head->num = 0;
  head->next = NULL;

  current = head;
  for(int i=1;i<5; i++){
    temp = (struct Node *) malloc(sizeof(struct Node));
    temp->num = i;
    temp->next = NULL;
    current->next = temp;
    current = temp;
  }
  current = lastKthNode(head, 5);
  if(current){
    printf("The Kth element is %d\n", current->num);
  } else {
    printf("Out of link list bounds!. Check value of K\n");
  }

  free(temp);
  free(head);
  return 0;
}

struct Node * lastKthNode(struct Node *list, int k){
  struct Node *head = list, *kLast = list;
  int counter = 0;

  while(head){
    printf("%d\n", head->num);
    head = head->next;
  }
  printf("******\n");
  head = list;
  while(head->next){
    head = head->next;
    if(counter == k){
      kLast = kLast->next;
      continue;
    }
    counter++;
  }
  if(counter < k){
    return NULL;
  }
  return kLast;
}

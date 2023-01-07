#include "include.h"

int count;


int main(){
    create();
    enque(5);

   
   printf("%d",deque());
    return 0;
}


void create(){
    head = NULL;
    tail = NULL;

}

void enque(int x){
    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node)) ;
        head->data = x;
        head->prev = NULL;
        tail = head;
    }
    else{
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = x;
        tmp->next =tail;
        tail = tmp;

    }
    
}

int deque(){
    int returnData = 0;
    if (head == NULL)   
    {
        printf("ERROR: deque from empty queue.\n");
        exit(1);
    }else{
        returnData = head->data;
        if (head->prev == NULL)
            head = NULL;
        
        else
            head = head->prev;
        head->next = NULL;
    }
    return returnData;
    
}

int size(){return count;}
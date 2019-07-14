#include <stdio.h>
#include <stdlib.h>

struct Node{
    int id;
    int count;
    struct Node* next;
};

typedef struct Node* NodePtr;

NodePtr head = NULL;

void print_report(){
    for(NodePtr p = head; p != NULL; p = p->next){
        printf("id: %d (%d)\n", p->id, p->count);
    }
}

void record_entry(int id){
    NodePtr currentPtr = head;
    NodePtr newPtr = (NodePtr)malloc(sizeof(struct Node));
    newPtr->id = id;
    newPtr->count = 1;
    newPtr->next = NULL;

    if(currentPtr == NULL){
        head = newPtr;
        return;
    }
    else{
        NodePtr nextPtr = currentPtr->next;
        if(newPtr->id < currentPtr->id){
            head = newPtr;
            newPtr->next = currentPtr;
            return;
        }
        while(nextPtr != NULL){
            if(currentPtr->id < newPtr->id && newPtr->id < nextPtr->id){
                currentPtr->next = newPtr;
                newPtr->next = nextPtr;
                return;
            }
            else if(currentPtr->id == newPtr->id){
                currentPtr->count++;
                free(newPtr);
                return;
            }
            else{
                currentPtr = nextPtr;
                nextPtr = nextPtr->next;
            }
        }
        if(currentPtr->id == newPtr->id){
            currentPtr->count++;
            free(newPtr);
        }
        else{
            currentPtr->next = newPtr;
        }
    }
}

void main(){
    int id;
    for(;;){
        printf("Enter id: ");
        scanf("%d", &id);
        if(id < 0){
            break;
        }
        record_entry(id);
    }
    print_report();
}

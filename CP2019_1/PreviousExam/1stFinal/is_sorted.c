#include <stdio.h>

typedef struct node{
    int val;
    struct node* next;
} Node, *NodePtr;

int is_sorted(NodePtr head){
    NodePtr currentPtr;
    NodePtr nextPtr;

    currentPtr = head;
    nextPtr = head->next;

    if(currentPtr == NULL){
        return 1;
    }
    while(nextPtr != NULL){
        if(currnentPtr->val > nextPtr->val){
            return 0;
        }
        currentPtr = nextPtr;
        nextPtr = nextPtr->next;
    }

    return 1;
}

NodePtr remove_dup(NodePtr x){
    NodePtr currentPtr;
    NodePtr nextPtr;

    currentPtr = x;
    nextPtr = x->next;

    while(nextPtr != NULL){
        if(currentPtr->val == nextPtr->val){
            NodePtr tmpPtr = nextPtr;
            currentPtr->next = nextPtr->next;
            nextPtr = nextPtr->next;
            free(tmpPtr);
        }
    }

    return x;
}

NodePtr merge(NodePtr x, NodePtr y){
    NodePtr currentPtr_x = x;
    NodePtr nextPtr_x = x->next;
    NodePtr currentPtr_y = y;
    NodePtr nextPtr_y = y->next;

    while(nextPtr_x != NULL && nextPtr_y != NULL){
        if(currentPtr_x->value <= currentPtr_y->value && currentPtr_y->value <= nextPtr_x->value){
            currentPtr_x->next = currentPtr_y;
            currentPtr_y->next = nextPtr_x;

            currentPtr_x = currentPtr_y;

            currentPtr_y = nextPtr_y;
            nextPtr_y = nextPtr_y->next;
        }
        else{
            currentPtr_x = nextPtr_x;
            nextPtr_x = nextPtr_x->next;
        }
    }
    if(nextPtr_x == NULL){
        currentPtr_x = 
    }

    return x;
}

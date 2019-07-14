#include <stdio.h>

struct player{
    int id_number;
    int scores;
    struct player *nextPtr;
};

typedef struct player Player;
typedef Player *PlayerPtr;

void insert(PlayerPtr *sPtr, int id, int value);
void announce_MVP(PlayerPtr *sPtr);

int main(){

}

void insert(PlayerPtr *sPtr, int id, int value){
    PlayerPtr NewPtr;
    PlayerPtr currentPtr;
    PlayerPtr nextPtr;

    NewPtr = (PlayerPtr)malloc(sizeof(Player));
    NewPtr->id_number = id;
    NewPtr->scores = value;

    if(*sPtr != NULL){
        currentPtr = *sPtr;
        nextPtr = currentPtr->nextPtr;
        while(nextPtr != NULL){
            if(currentPtr->scores <= value && value < nextPtr->scores){
                currentPtr->nextPtr = NewPtr;
                NewPtr->nextPtr = nextPtr;
                break;
            }
        }
    }
    else{
        *sPtr = NewPtr;
        (*sPtr)->nextPtr = NULL;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char *name;
}Node, *NodePtr;

NodePtr create(char *message){
    NodePtr new_element = (NodePtr)malloc(sizeof(Node));
    if(!new_element){
        printf("Out of memory\n");
        return NULL;
    }
    /*
    new_element->name = (char *)malloc(strlen(message) + 1);
    strcpy(new_element->name, message);
*/
    // malloc을 통해서 name의 메모리 주소가 heap 영역 안에 있게 해야 free 가능
    new_element->name = message;
    return new_element;
}

void destroy(NodePtr garbage_element){
    free(garbage_element->name);
    free(garbage_element);
}
/*
void main(){
    char message[] = "Hello, world";
    NodePtr element = create(message);
    if(element){
        printf("Element is %s\n", element->name);
        // destroy(element); -> error occurred
    }
}
*/

void main(){
    char message[] = "Hello, world";
    char *copy = (char *)malloc(strlen(message) + 1);
    strcpy(copy, message);
    NodePtr element1 = create(copy);
    NodePtr element2 = create(copy);
    if(element1){
        destroy(element1);
        // destroy(element1); -> error occurred
    }
    if(element2){
        destroy(element2);
        // destroy(element2); -> error occurred
    }
}

#ifndef _LIB_H_
#define _LIB_H_


typedef struct node {          //Node type
    int data;
    struct node* next;
}ST_listNode_t;

typedef struct list {         //list type   
    ST_listNode_t* head;
    int size;
}ST_list_t;

void createEmptyList(ST_list_t* list);

int insertToListend(ST_list_t* list, int data);

int insertToList(ST_list_t* list, int position, int data);

int printList(ST_list_t* list);

int deleteFromList(ST_list_t* list, int position);

int getNodeData(ST_list_t* list, int nodeNumber);

// typedef unsigned char  uint8_t; 
#endif // !_LIB_H_

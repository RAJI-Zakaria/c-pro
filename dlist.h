#ifndef __DLIST_H__
#define __DLIST_H__

//definition dun booleen
typedef enum{
    false,
    true
}Bool;


//definition dun maillon de la Dliste liste doublement chainee
typedef struct DListNode{
    int value;
    struct DListNode *back;
    struct DListNode *next;
}DListNode;
//definition ddune Dliste
typedef struct DList{
    int length;
    struct DListNode *begin;
    struct DListNode *end;
}*DList;

DList new_dlist(void);

Bool is_empty_dList(DList li);
int dlist_length(DList li);

int dlist_first(DList li);
int dlist_last(DList li);
DList push_back_dlist(DList li, int x);
DList push_front_dlist(DList li, int x);
DList pop_front_dlist(DList li);
DList pop_back_dlist(DList li);

void print_dlist(DList li);

#endif
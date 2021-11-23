#include <stdio.h>
#include "dlist.h"


int main(void){
    DList mylist = new_dlist();
     
    mylist= push_front_dlist(mylist,14);
    printf("Taille de la liste : %d\n",dlist_length(mylist));
    print_dlist(mylist);
    printf("\n----------------------\n");


    mylist= push_front_dlist(mylist,2);
    printf("Taille de la liste : %d\n",dlist_length(mylist));
    print_dlist(mylist);
    printf("\n----------------------\n");



    mylist= push_front_dlist(mylist,33);
    printf("Taille de la liste : %d\n",dlist_length(mylist));
    print_dlist(mylist);
    printf("\n----------------------\n");



    mylist= push_front_dlist(mylist,18);
    printf("Taille de la liste : %d\n",dlist_length(mylist));
    print_dlist(mylist);
    printf("\n----------------------\n");

    print_dlist(mylist);

    return 0;
}
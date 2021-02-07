//
// Created by madusha mihiranga on 7/02/2021.
//

#ifndef _LINKEDLISTINVENTORY_INVENTORY_H
#define _LINKEDLISTINVENTORY_INVENTORY_H

#endif //_LINKEDLISTINVENTORY_INVENTORY_H
#include "LinkedList.h"
//#include "item.h"

void testInv(){

    struct Item item1;
    strcpy(item1.name, "Item 1");
    item1.price = 150.00;
    item1.count = 2;

    struct Item item2;
    strcpy(item2.name, "Item 2");
    item2.price = 50.00;
    item2.count = 20;

    struct Item item3;
    strcpy(item3.name, "Item 3");
    item3.price = 450.00;
    item3.count = 120;

    struct Item item4;
    strcpy(item4.name,  "Item 4");
    item4.price = 600.00;
    item4.count = 25;

    struct Item item5;
    strcpy(item5.name, "Item 1");
    item5.price = 100.00;
    item5.count = 210;

    struct Item item6;
    strcpy(item6.name, "Item 6");
    item6.price = 1800.00;
    item6.count = 15;

    insertFirst(1,item1);
    insertFirst(2,item2);
    insertFirst(3,item3);
    insertFirst(4,item4);
    insertFirst(5,item5);
    insertFirst(6,item6);

    printf("Original List: ");

    //print list
    printList();

    while(!isEmpty()) {
        struct node *temp = deleteFirst();
        printf("\nDeleted value:");
        printf("(%d,%s) ",temp->key,temp->data.name);
    }

    printf("\nList after deleting all items: ");
    printList();
    insertFirst(1,item1);
    insertFirst(2,item2);
    insertFirst(3,item3);
    insertFirst(4,item4);
    insertFirst(5,item5);
    insertFirst(6,item6);

    printf("\nRestored List: ");
    printList();
    printf("\n");

    struct node *foundLink = find(4);

    if(foundLink != NULL) {
        printf("Element found: ");
        printf("(%d,%s) ",foundLink->key,foundLink->data.name);
        printf("\n");
    } else {
        printf("Element not found.");
    }

    delete(4);
    printf("List after deleting an item: ");
    printList();
    printf("\n");
    foundLink = find(4);

    if(foundLink != NULL) {
        printf("Element found: ");
        printf("(%d,%s) ",foundLink->key,foundLink->data.name);
        printf("\n");
    } else {
        printf("Element not found.");
    }

    printf("\n");
    //sort();

    //printf("List after sorting the data: ");
    //printList();

    reverse(&head);
    printf("\nList after reversing the data: ");
    printList();
}

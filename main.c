#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
//#include <termcap.h>

#include "LinkedList.h"

struct sell{
    int itemId;
    int qty;
};

struct sell addItemToSale(){
    int itemId;
    int qty = 0;
    //float lineTotal = 0.00;
    struct sell row;
    printf("\nEnter item ID :");
    scanf("%i",&itemId);
    struct node *foundLink = find(itemId);
    if (foundLink != NULL){
        printf("Enter Quantity :");
        scanf("%i",&qty);
        if (foundLink->data.count < qty){
            printf("\nNot enough stock\n");
        } else{
            row.qty = qty;
            row.itemId = itemId;
        }
    } else{
        printf("\nCould not find item number %i \n",itemId);
    }
    return row;
};

void addNewSale(){
    float total = 0.00;
    struct sell bill[] = {};
    printf("\nCreate New Sale");
    int bill_length = sizeof(bill)/sizeof(bill[0]);
    int itemCount = 1;
    while (itemCount != 0){
        printf("%i",itemCount);
/*        if (bill_length == 0){
            bill[0] = addItemToSale();
        } else{
            printf("\nDo You want to add more items (yes = 1/no = 0) :");
            scanf("%i",&continueAddItems);
            bill[bill_length+1] = addItemToSale();
        }*/
    }

}

void addNewItem(){
    struct Item item;
    char name[100];
    int nextkey;;
    if (head != NULL){
        nextkey = head->key+1;
    } else{
        nextkey = 1;
    }
    printf("----------------------------\n");
    printf("| ** important : When entering the Item name, replace the space with the underscore ** |\n");
    printf("(1) Enter Item name :");
    scanf("%s",name);
    strcpy(item.name, name);
    printf("(2) Enter Price : ");
    scanf("%f",&item.price);
    printf("(3) Enter Item Count :");
    scanf("%d",&item.count);
    insertFirst(nextkey,item);
}

void searchItem(){
    int key;
    printf("----------------------------\n");
    printf("Enter the item number you want to search for : ");
    scanf("%i",&key);
    struct node *foundLink = find(key);
    if (foundLink != NULL){
        printf("(%d)   %s    |   %.2f   |    %i \n",foundLink->key,foundLink->data.name,foundLink->data.price,foundLink->data.count);
    } else{
        printf("\nCould not find item number %i \n",key);
    }
}

void deleteItem(){
    int itemId;
    printf("\nEnter the item ID you want to delete\n");
    printf("Item ID :");
    scanf("%i",&itemId);
    struct node *foundLink = find(itemId);
    if(foundLink != NULL) {
        delete(itemId);
        printf("\nItem Deleted\n");

    } else {
        printf("\nElement not found.\n");
    }
}

void start(){
    int userinput;
    printf("\nInventory management system\n");
    printf("Select 1 to add new item. "
           "\nSelect 2 to view inventory "
           "\nSelect 3 to Search "
           "\nSelect 4 to Create Sell"
           "\nSelect 5 to Delete item"
           "\n----------------------------\n"
           );
    printf("Input :");
    scanf("%d", &userinput);
    if (userinput == 1){
        //Add new item
        addNewItem();
    } else if (userinput ==2){
        //view
        printList();
    } else if (userinput == 3){
        //search
        searchItem();
    } else if (userinput == 4){
        //sell
        addNewSale();
    } else if (userinput == 5){
        //delete item
        deleteItem();
    }else{
        printf("\nInvalid Input\n");
    }
    start();
}



int main() {
   start();
   return 0;
}



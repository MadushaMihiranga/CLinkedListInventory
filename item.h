//
// Created by madusha mihiranga on 7/02/2021.
//

#ifndef _LINKEDLISTINVENTORY_ITEM_H
#define _LINKEDLISTINVENTORY_ITEM_H

#endif //_LINKEDLISTINVENTORY_ITEM_H

struct Item{
    char name[100];
    float price;
    int count;
};

/*char getName(struct Item item){
    return item.name[100];
}

void setName(struct Item item,char name[100]){
    strcpy(item.name,name);
}

double getPrice(struct Item item){
    return item.price;
}

void setPrice(struct Item item,double price){
    item.price = price;
}

int getCount(struct Item item){
    return item.count;
}

void setCount(struct Item item,int count){
    item.count = count;
}*/

void toString(struct Item item){
    printf("Item details -  %s : %f : %i \n",item.name,item.price,item.count);
}




//
//  Item.c
//  Lab11es3
//
//  Created by Oskar Bich on 10/01/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Item.h"

Item ITEMload(char name1[], char name2[]) {
    Item x;
    strcpy(x.elab, name1);
    strcpy(x.net, name2);
    return x;
}

void ITEMstore(Item val) {
    printf("elab: %s net: %s\n", val.elab, val.net);
}

Item ITEMsetNull(void) {
    Item val = {" ", " "};
    return val;
}

Key KEYget(Item *pval) {
    return pval->elab;
}

void KEYscan(Key node) {
    scanf("%s", node);
}

int KEYcmp(Key k1, Key k2) {
    return strcmp(k1, k2);
}

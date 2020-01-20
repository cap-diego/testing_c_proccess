//
// Created by diego on 1/17/20.
//

#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

#define INT_SIZE 4

int main() {
//    printf("hola mundo");
//
//    char * name = "aa";
//    char name2[] = "holaaa";
//    char name3[10];
//    scanf("%9s", name3);
//    printf("El largo de _ %s _ es %d", name3, len(name3));
    int *ptr = (int*)malloc(10 * sizeof(int));
    int *init_addr = ptr;
    int i = 0;

    while (i++ < 10) {
        *ptr = i+10;
        ptr++;
    }
    i = 0;
    ptr = init_addr;
    while (i++ < 10) {
        printf("value in %d is: %d\n", i, *ptr);
        ptr++;
    }

    int8_t int_de_32;
    int int_normal;
    printf("%ld %ld", sizeof(int_de_32), sizeof(int_normal));
    free(init_addr);

}


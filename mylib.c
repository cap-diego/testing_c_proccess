//
// Created by diego on 1/17/20.
//

#include "mylib.h"

int len(char* str) {
    int len = 0;
    while(*str != '\0') {
        str++;
        len++;
    }
    return len;
}
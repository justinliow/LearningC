/*Write your C code here*/
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE
int main() {
    char *buffer=NULL;
    size_t capacity=0;
    ssize_t result=getline(&buffer, & capacity, stdin);
    
    
    printf("%d : %s\n", result, buffer);
    free(buffer);    
    return 0;
}

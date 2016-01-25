/*Write your C code here*/
#include <stdio.h>
#include <limits.h>
#include <string.h>
int main() {
    char * Hello = "Hello 5 World";
    char buffer[20];
    char buffer2[20];
    int number=0;
    sscanf(Hello, "%s %d %s", buffer, & number, buffer2 );
    
    
    
    return 0;
}

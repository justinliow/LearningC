/*Write your C code here*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Person person_t;

struct Person{
    char* name;
    int age;
    person_t* friends[];
    
};

person_t* create(String namet, int aget, person_t* friendst[])
{
    person_t* result=(person_t*)malloc(sizeof(person_t));
    result->name=namet;
    result->age=aget;
    result->friends=friendst;
}
void person_destroy(person_t * ptr)
{
    free(ptr->age);
    free(ptr->name);
    free(ptr->friends);
    memset(ptr, 0, sizeof(person_t));
    free(ptr);
}

int main() {
    person_t* ptr1= (person_t*)malloc(sizeof(person_t));
    person_t* ptr2= (person_t*)malloc(sizeof(person_t));
    ptr1->name="Agent Smith";
    ptr2->name="Sonny Moore";
    ptr1->age=128;
    ptr2->age=256;
    ptr1->friends[0]=ptr2;
    ptr2->friends[0]=ptr1;
    
    free(ptr1);
    free(ptr2);
    return 0;
}

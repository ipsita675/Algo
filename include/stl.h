//include guard 
#ifndef STL_H_ 
//Check if STL_H_ is NOT defined
#define STL_H_ 
//define it haha

#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 500

//QUEUE

typedef struct kyu {
    int items[MAX_VERTICES];
    int size;
    int front;
    int rear;
} kyu;//type alias

void kyu_init(kyu*);
void kyu_push(kyu*, int);
int kyu_pop(kyu*);
//kyu* cos Pass by Reference

#endif
// End of include guard

#include <stdlib.h>
#include <stdbool.h>
struct table{
    void* block;
    int size;
};

bool block_deallocated = false;
struct table* t;
void init_table(int size){
    t = malloc(size);
    t->block = malloc(size);
    t->size = size;
    block_deallocated = false;
}

void destroy_table(){
    t->size = 0;
    free(t->block); 
    block_deallocated = true;
    free(t);
}

void write_to_block(void* block, int size){
    if(block_deallocated == false){
        t->block = block;
        t->size  = size;
    }
}

void read_from_block(void* block_ptr, int size){
    if(block_deallocated == false){
        block_ptr = t->block;
        size = t->size;
    }
}


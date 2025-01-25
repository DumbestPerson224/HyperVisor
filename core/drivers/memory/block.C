#include <stdlib.h>
#include <stddef.h>
#include <string.h>
struct Table{
    size_t size;
    void* block;
};

struct Table* table_ptr = NULL;

void allocate_block(size_t size){
    if(table_ptr == NULL){
        table_ptr = malloc(sizeof(struct Table));
        if(table_ptr != NULL){
            table_ptr->size = size;
            table_ptr->block = malloc(table_ptr->size);
        }
    }
}

void deallocate_block(){
    if(table_ptr != NULL){
        table_ptr->size = 0;
        free(table_ptr->block);
        free(table_ptr);        
        table_ptr = NULL;
    };
}

void write_to_block(void* object, size_t size){
    if(table_ptr != NULL){
        if(table_ptr->size <= size){
            memmove(table_ptr->block, object, size);
        }
    }
}

void read_block(void* block_ptr, size_t size){
    if(block_ptr != NULL && table_ptr != NULL){
        if(size <= table_ptr->size){
           memcpy(block_ptr, table_ptr->block, size);
        }
    }
}

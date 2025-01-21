#include <cstddef>
typedef struct {
    size_t size;
    void* block;
} table;

void allocate(size_t size){
  table* t = nullptr;
  t = new table;
  t->size = size;
  t->block = nullptr;
  t->block = new t->size;
  t = nullptr;
}

void deallocate(){
  table* t = nullptr;
  t = new table;
  if(t->block != nullptr){
     delete &t->block;
     t->size = 0;
  }
  t = nullptr;
}

void write_to_block(auto object){
   table* t = nullptr;
   t = new table;
   if(t->block == nullptr){
      t->block = &object;
   }
   t = nullptr;
}

void read_from_block(){
  table* t = nullptr;
  t = new table;
  if(t->block != nullptr){
      return t->block;
  }
  t = nullptr;
}

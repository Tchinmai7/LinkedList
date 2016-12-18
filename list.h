#ifndef LIST_H
#define LIST_H
typedef struct list{
  void* data;
  struct list* next;
} List;
//A global pointer for the list is maintained. The data size is also stored globally.
//The pointer to the head of the list is returned to the calling function.
//A pointer that points to the current location is also created.
List* create(int data_size);
//Gets the pointer to be stored,and the place of insertion. Head or Tail.
// Head insertion is to be noted as place=1 and tail to be noted as place=0
List* add(void* data,int place,List* head);
//only the data to be deleted is given.
List* delete(void* data,List* head);
List* rewindlist(List* head);
List* move_forward(List* current);
void* get_data(List* current);
#endif

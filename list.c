#include<stdlib.h>
#include<string.h>
#include "list.h"
int size_of_data;
List* list_data;
List* current;
//A global pointer for the list is maintained. The data size is also stored globally.
//The pointer to the head of the list is returned to the calling function.
//A pointer that points to the current location is also created.
List* create(int data_size)
{
	list_data=(List*)malloc(sizeof(List));
	list_data->data=malloc(sizeof(data_size));
	list_data->next=NULL;
	size_of_data=data_size;
	current=list_data;
	return list_data;
}
//Gets the pointer to be stored,and the place of insertion. Head or Tail.
// Head insertion is to be noted as place=1 and tail to be noted as place=0
List* add(void *data,int place,List* head)
{
	//the first time insertion
	if(head->data == NULL) {
		memcpy(head->data,data,size_of_data);
		current=head;
		return current;
	} else {
		List* temp=(List*)malloc(sizeof(List));
		current=head;
		//creates a temporary node and copies data onto the node
		temp->data=malloc(size_of_data);
		memcpy(temp->data,data,size_of_data);
		//insertion at the head of the list;
		if(place == 1) {
			temp->next=head;
			head=temp;
			current=temp;
			return current;
		} else {
		//tail insertion. First the list is traversed, to reach the tail node. then the temp node
		//is assigned as the new tail. The current pointer is updated.
			while(current->next != NULL) {
				current=current->next;
			}
			current->next=temp;
			temp->next=NULL;
			current=current->next;
			return current;
		}
	}
}
//only the data to be deleted is given.
List* delete(void* data,List* head)
{
	List* temp=head;
	if((temp != NULL) && (memcmp(temp->data,data,size_of_data) == 0)) {
		head=head->next;
		free(temp);
		return head;
	} else {
		List* prev;
		while((temp != NULL) && (memcmp(temp->data,data,size_of_data) != 0)) {
			prev=temp;
			temp=temp->next;
		}
		if(temp == NULL) {
			 return head;
		}
		//temp will now point at the node before
		prev->next = temp->next;
		free(temp);
		return head;
	}
}
//returns the head pointer
List* rewindlist(List* head)
{
	return head;
}
//moves the current pointer one step ahead
List* move_forward(List* current)
{
	if(current->next != NULL){
		current=current->next;
	}
	return current;
}
//returns value in the current node
void* get_data(List* current){
	return current->data;
}

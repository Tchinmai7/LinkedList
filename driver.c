#include "list.h"
#include<stdio.h>
int main(int argc, char **argv)
{
	List *list,*current;
	list=create(10);
	current=add("1",0,list);
	current=add("a",0,list);
	list=add("k",1,list);
	current=rewindlist(list);
	printf("%s",get_data(current));
	current=move_forward(current);
	printf("%s",get_data(current));
	current=move_forward(current);
	printf("%s",get_data(current));
	current=move_forward(current);
	printf("%s\n",get_data(current));
	char* s="1";
	list=delete(s,list);
	//delete("d",list);
	current=rewindlist(list);
	printf("%s",get_data(current));
	current=move_forward(current);
	printf("%s",get_data(current));
	current=move_forward(current);
	printf("%s",get_data(current));
	current=move_forward(current);
	printf("%s\n",get_data(current));
	return 0;
}

A Library to manipulate linked lists in C.
Methods in the library


1. create()

        Params : size_of_data (required)
        Return value: Pointer to the head of the linked list.
        
2. Add()

        Params : data_to_be_stored (pointer to data or actual data in string form)(Required)
                 Place (0 for insertion at end, 1 for insertion at front) (Required)
                 Pointer_to_list_head (Required)
        Return value : Returns a pointer to the node that contains the inserted data
        
       
3. delete()

        Params : data_to_be_deleted (pointer to data or actual data) ( Required)
                 Pointer_to_list_head (Required)
        Return value : Returns a pointer to the head node
        
        
4. rewindlist()

        Params :    Pointer_to_list_head (Required)
        Return value : Returns a pointer to the head node - Resets the current pointer
        
        
5. move_forward()

        Params :  Pointer_to_move (Required)
        Return Value : Returns a pointer to the next node, if it exists.
        
        
6. get_data()

        Params : Pointer_to_the_node(Required)
        Return Value : Returns a pointer to the data present in the node.


Check the driver.c for a sample implementation.

Compilation and usage Instructions :
1. remember to include "list.h" in the driver program.
2. add the library to the compliation process.

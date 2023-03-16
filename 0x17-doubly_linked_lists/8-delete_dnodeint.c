#include "lists.h"
  
/* 
 * deleteNode - a function that deletes a node at ny index in a list.
 * a node of the doubly linked list */
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
  
/* Function to delete a node in a Doubly Linked List.
   head_ref --> pointer to head node pointer.
   del  -->  pointer to node to be deleted. */
void deleteNode(struct Node** head_ref, struct Node* del)
{
    
    if (*head_ref == NULL || del == NULL)
        return;
 
    if (*head_ref == del)
        *head_ref = del->next;
  
    if (del->next != NULL)
        del->next->prev = del->prev;
  
    if (del->prev != NULL)
        del->prev->next = del->next;
  
    free(del);
    return;
}

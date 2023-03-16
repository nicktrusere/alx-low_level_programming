#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @idx: the index of list where new node should be added.
 *
 * Return: address of new node or NULL on failure.
 * If not possible to add idx,
 * Return: NULL
 */
int insert_dnodeint_at_index(int i, int idx)
{
    int i;
    struct node * newnode, *tmp;
    if(ennode == NULL)
    {
        printf(" No data found in the list!\n");
    }
    else
    {
        tmp = stnode;
        i=1;
        while(i<idx-1 && tmp!=NULL)
        {
            tmp = tmp->nextptr;
            i++;
        }
        if(idx == 1)
        {
            DlLinsertNodeAtBeginning(num);
        }
        else if(tmp == ennode)
        {
            DlLinsertNodeAtEnd(num);
        }
        else if(tmp!=NULL)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->num = num;
//next address of new node is linking with the next address of temp node            
            newnode->nextptr = tmp->nextptr; 
// previous address of new node is linking with the tmp node            
            newnode->preptr = tmp;              
            if(tmp->nextptr != NULL)
            {
                tmp->nextptr->preptr = newnode; // n+1th node is linking with new node
            }
            tmp->nextptr = newnode; // n-1th node is linking with new node 
        }
        else
        {
            printf(" The position you entered, is invalid.\n");
        }
    }
}

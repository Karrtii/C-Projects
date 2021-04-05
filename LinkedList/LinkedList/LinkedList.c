#include "LinkedList.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

node linkedList_create() //creates a node and returns the node
{
	node temp;
	temp = (node)malloc(sizeof(struct ListNode));
	temp->next = NULL; // make the next pointer to NULL, -> dereferences the left side
	return temp;
}

linkedList_listReturnedCode_t linkedList_destroy(node self)
{
	if (self != NULL)
	{
		free(self);
	}
	return OK;
}

linkedList_listReturnedCode_t linkedList_push(node head, void* item)
{
	node temp, temp2;
	temp = linkedList_create();
	temp->item = item;

	if (head == NULL)
	{
		head = temp;
	}

	else
	{
		temp2 = head;
		while (temp2->next != NULL)
		{
			temp2 = temp2->next; //traverse the list until temp2 is the last node.The last node always points to NULL.
		}
		temp2->next = temp; //Point the previous last node to the new node created.
	}
	return OK;
}

void* linkedList_pull(node head)
{
	node temp;
	temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next; //traverse the list until temp2 is the last node.The last node always points to NULL.
		return temp->item;
	}

}

linkedList_listReturnedCode_t linkedList_containsItem(node head, void* item)
{
	node current = head;

	//if list is empty
	if (head == NULL) 
	{
		return EMPTY;
	}

	//navigate through list
	while (current->item != item)
	{

		//if it is last node
		if (current->next == NULL) {
			return NOT_FOUND;
		}
		else {
			//go to next link
			current = current->next;
		}
	}
	//if data found, return the FOUND
	return FOUND;
}

linkedList_listReturnedCode_t linkedList_removeItem(node head, void* item)
{
	node current, previous;
	current = head;
	previous = NULL;

	if (head == NULL)
	{
		return EMPTY;
	}

	//navigate through list
	while (current->item != item)
	{
		//if it is last node
		if (current->next == NULL)
		{
			return NOT_FOUND;
		}
		else 
		{
			//store reference to current link
			previous = current;
			//move to next link
			current = current->next;
		}
	}

	//found a match, update the link
	if (current == head)
	{
		//change first to point to next link
		head = head->next;
	}
	else 
	{
		//bypass the current link
		previous->next = current->next;
	}
}

uint16_t linkedList_length(node head)
{
	int length = 0;
	node current;

	for (current = head; current != NULL; current = current->next)
	{
		length++;
	}
	return length;
}

void printList(node head)
{
	while (head != NULL) {
		printf("%d ", head->item);
		head = head->next;
	}
}
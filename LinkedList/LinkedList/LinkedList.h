#pragma once
#include <stdint.h>

typedef enum
{
	OK,
	EMPTY,
	NOT_FOUND,
	FULL,
	FOUND
}linkedList_listReturnedCode_t;

struct ListNode
{
	void* item;
	struct ListNode* next;
};

typedef struct ListNode* node;

node linkedList_create();
linkedList_listReturnedCode_t linkedList_destroy(node head);
linkedList_listReturnedCode_t linkedList_push(node head, void* item);
//void* linkedList_pull(node head);
linkedList_listReturnedCode_t linkedList_containsItem(node head, void* item);
linkedList_listReturnedCode_t linkedList_removeItem(node head, void* item);
//void* linkedList_peekItemByIndex(node head, uint16_t index);
uint16_t linkedList_length(node head);
//void linkedList_clear(node head);
void printList(node head);
#include "LinkedList.h"

int main(void)
{
	node node1;
	int num=100;
	int num2 = 222;
	int num3 = 333;

	node1 = linkedList_create();
	linkedList_push(node1, num);
	linkedList_push(node1, num2);

	//linkedList_removeItem(node1, num);
	printList(node1);
}
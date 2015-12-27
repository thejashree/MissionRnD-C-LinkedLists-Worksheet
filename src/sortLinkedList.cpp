/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;

	struct node *t1=head;
	struct node *t2;
	int temp;

	while(t1!=NULL)
	{
		t2=t1->next;
		while(t2!=NULL)
		{
			if(t1->num > t2->num)
			{
				temp=t1->num;
				t1->num=t2->num;
				t2->num=temp;
			}
			t2=t2->next;
		}
		t1=t1->next;
	}
	return head;
	

}
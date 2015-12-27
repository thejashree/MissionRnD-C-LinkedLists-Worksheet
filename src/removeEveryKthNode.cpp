/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int k) {
	
	if(head==NULL || k<=0)
		return NULL;
	struct node *t = head;
	if (k == 1)
		head = NULL;
	else
	{
		while (t!= NULL)
		{
			
			int n = 1;
			while (n != k - 1)
			{
				t = t->next;
				n = n + 1;
			}
			struct node *temp;
			if (t->next != NULL)
			{
				temp = t->next->next;
				t->next = temp;
			}
			t = t->next;
			
		}
	}
	return head;
}
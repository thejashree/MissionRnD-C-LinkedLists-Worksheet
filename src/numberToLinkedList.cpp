/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node* createLLNode(int data)
{
	struct node *t = (struct node *)malloc(sizeof(struct node));
	t->num = data;
	t->next = NULL;
	return t;
}

struct node* insertInBegin(struct node *head, int data)
{
	struct node *t = createLLNode(data);
	if (head == NULL)
		return t;
	t->next = head;
	head = t;
	return head;
}

struct node * numberToLinkedList(int N) {
	int rem;
	struct node *head = NULL;
	if (N < 0)
	{
		N = N*-1;
		head = numberToLinkedList(N);
	}

	else if (N == 0)
		head = insertInBegin(head, N);
	else
	{
		while (N != 0)
		{
			rem = N % 10;
			head = insertInBegin(head, rem);
			N = N / 10;
		}
	}
	return head;
}
#include <stdio.h>
#include <string.h>
#include <link.h>

	/* declare header pointer to the */
	/* beginning of the linked list */
Node *list = NULL;

void add(Node *node)
{
		Node *current;

		/* if the linked list is empty, this */
		/*node will become the first node */
		/* in the linked list*/
		if (list == NULL)
		{
			list = node;
			printf( "This person was added to the "
					"linked list: %s\n",
					node->name);
		}	/* end if statement */

		else		/* linked list has at least */
		{		/*one node in it*/
			current = list;

				/* traverse all the way to the */
				/* end of the linked list */
			while (current ->next != NULL)
			{
				current = current ->next;
			}	/* end while loop */

				/* have current last node in */
				/* linked list point to the */
				/* new node, thus inserting it */
				/* to be the new last node */
			current->next = node;
			printf("This person was added to the "
					"linked list: %s\n",
					node->name);

		} /* end else statement */

}	/* end function add */

Node *createNewNode(char name[], int age)
{
	Node *newNode;

		/* allocate memory for new node */
	newNode = mallac (sizeof (Node));
	strcpy(newNode->name, inName);
	newNode->age = inAge;
	newNode ->next = NULL;
	return newNode;
}	/*end function creatNewNode */

void printList()
{
	Node *current;

	current = list;
	printf("n\Here is the current linked list\n");

	/* traverse all of the linked list */
	/* printing each node as you go along */
	while (current != NULL)
	{
		printf("\n%s %d", current ->name, current->age);
		current = current->next;
	}	/* and while loop */

	printf("\n");

}	/*end function printList*/



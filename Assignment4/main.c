/*
* Programmer:			Germain Matali
* Course :				COSC 2336 Section 001
* Semester: 				Summer 2014
* Assignment #:			5
* Due Date				October 11, 2017
*********************************************************************/


#include <stdio.h>
#include <string.h>
#include "link.h"

int main()
{
	/* declare variables to be */
	/*used in program */
	char name [15];
	char oneChar;
	int strLength, done = 0, i, age;
	Node *newPerson;

	do
	{
		/*prompt and read in name*/
		/* and age */
		printf("\nPlease enter a name (or 'q' to quit):\n");
		scanf("%s", name);
		strLength = strlen(name);

		/* does user want to quit? */
		if (strLength) == 1 && tolower(name[0])	 ==	'q')
		{
			done = 1; /* we are done!*/
		}
		else if (strLength == 0)
		{
			printf( "\n\t***You must enter a name!***\n\n");
		}
		else 	/*valid name has been entered */
		{
			printf("Please enter an age : \n");
			scanf(%d, &age);

			/* create a node for this person */
			newPerson = (Node *) createNewNode(name, age);

			/*add this node to*/
			/* the linked list */
		add(newPerson);

		} /*end else statement */
	}	while (!done);

	printf("\nThis program was written by Germain Matali");
	printf("\nEnd of program.\n");

		/* proceed if we are not done */
	if (!done)
	{
		printList();
	}

	    /* exit program normally */
		return 0;
}	/* exit program normally */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define pushPukka(X, Y) _Generic((Y), int: pushPukkai)(X, Y)

//Defining node of the list which contains a pointer to data to be added and a pointer to next node of the list.

struct Node
{
	void* data; //It points to address of data on the list.
	struct Node* nextNode; //It points to address of next node.
};

//Structure of pukkaList variable.

typedef struct PUKKA_LIST {

	struct Node* headNode; //Declaration of head node of nodes of the list.
	struct Node* endNode; //Declaration of end node of nodes of the list.
	unsigned int length;

} pukkaList;

//Function to create a pukkaList which actually is a pointer to a pukkaList.

pukkaList* createPukkaList() {

	//Allocate memory for the list and define pointers of the list as null.

	pukkaList* pl = (pukkaList*) malloc(sizeof(pukkaList));
	pl->headNode = NULL;
	pl->endNode = NULL;
	pl->length = 0;

	return pl; //Return the pointer of the allocated memory.

}

//Function to push the data to given pukkaList's end.

void pushPukkai(pukkaList* pl, int i) {

	//Allocate memory for the data added to list and write the argument passed to function to allocated memory.

	int* iptr = (int*) malloc(sizeof(int));
	*iptr = i;

	//Allocate memory for the new node and then define the node's data member as the pointer above and define 
	//the node's nextNode member as null

	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data = iptr;
	newNode->nextNode = NULL;

	//Define the nextNode member of the pukkalist's end node as created node.Then add the created new node at 
	//the end of the given pukkalist. 

	if (pl->length == 0) {

		pl->headNode = newNode;
		pl->endNode = newNode;
		pl->length++;

	} else {

		struct Node* nptr = pl->endNode;
		nptr->nextNode = newNode;
		pl->endNode = newNode;
		pl->length++;

	}

}

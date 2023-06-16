#ifndef _PUKKA_H
#define _PUKKA_H

#include <stdlib.h>
#include <string.h>

#define createPukkaList(T) createPukkaListInternal(sizeof(T))

#define pushPukka(X, Y) do {__typeof__(Y) temp = Y; pushPukkaInternal(X, &temp);} while(0)

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
    size_t element_size;
	unsigned int length;

} pukkaList;

//Function to create a pukkaList which actually is a pointer to a pukkaList.

pukkaList* createPukkaListInternal(size_t element_size) {

	//Allocate memory for the list and define pointers of the list as null.

	pukkaList* pl = (pukkaList*) malloc(sizeof(pukkaList));
	pl->headNode = NULL;
	pl->endNode = NULL;
	pl->element_size = element_size;
	pl->length = 0;

	return pl; //Return the pointer of the allocated memory.

}

//Function to add an element to pukkaList's end.

void pushPukkaInternal(pukkaList* pl, void* data) {

	//Allocate memory for the new node and the node's data member and define the node's nextNode member as null

	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data = malloc(pl->element_size);
	newNode->nextNode = NULL;

	//Copy the content of the data given as argument to memory which allocated for new node's data member.

	memcpy(newNode->data, data, pl->element_size);

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

//Function to delete the element which at pukkaList's end.

void popPukka(pukkaList* pl) {

    if(pl->length > 1) {

        struct Node* cursor = pl->headNode; //Place the cursor on the element at the beginning of the pukkaList.

        for (int i = 1; i <= pl->length; i++) {

            if (i == pl->length - 1) { //Make the penultimate pukkaList element the last element of the pukkaList.
                pl->endNode = cursor;
            }

            if (i == pl->length) { //Clear the data pointed by the last element of pukkaList from memory.

                free(cursor->data);
                cursor->data = NULL;

                free(cursor);
                cursor = NULL;

                pl->endNode->nextNode = NULL; //Set next node of the last element of pukkaList to NULL.

                break;
            }

            cursor = cursor->nextNode; //Move the cursor to next node pointed by current node.

        }

    } else if (pl->length == 1) {

        free(pl->headNode->data);
        pl->headNode->data = NULL;

        free(pl->headNode);
        pl->headNode = NULL;
        pl->endNode = NULL;

    }

    if (pl->length > 0) {
        pl->length--;  //Reduce one the length attribute of pukkaList.
    }

}


#endif //_PUKKA_H
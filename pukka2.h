#ifndef PUKKA_H
#define PUKKA_H
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

#define STRINGIFY_HELPER(x) #x

#define createPukkaList(T) strcmp(STRINGIFY_HELPER(T), "int") ? ERROR_CODE=0 : ERROR_CODE=1
_Static_assert(ERROR_CODE, "Hata")

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

//Function to create a pukkaList

pukkaList* createPukkaListInternal(size_t element_size) {

	pukkaList* pl = (pukkaList*) malloc(sizeof(pukkaList));
	pl->headNode = NULL;
	pl->endNode = NULL;
	pl->element_size = element_size;
	pl->length = 0;

	return pl; //Return the list.

}

pukkaList* createPukkaListError(int line) {

	printf("Error in line %d: \'You must use a defined data type!\'\n", line);
	getch();
	return NULL;

}

#endif
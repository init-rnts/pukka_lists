#ifndef PUKKA_H
#define PUKKA_H
#include <stdlib.h>

#define STRINGIFY_HELPER(x) #x
#define createPukkaList(T) (((__typeof__ (T) == __typeof__ (const char) || __typeof__ (T) == __typeof__ (const char*)) \
							&& STRINGIFY_HELPER(T)[0] == '"' ) ? createPukkaListError() : createPukkaListInternal(sizeof(T)))
//#define pushPukka(X, Y) pushPukkaInternal(&X, Y)

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

pukkaList createPukkaListInternal(size_t element_size) {

	pukkaList pl;
	pl.headNode = NULL;
	pl.endNode = NULL;
    pl.element_size = element_size;
	pl.length = 0;

	return pl; //Return the list.

}

void createPukkaListError() {

	printf("Hata");

	return EXIT_FAILURE;
}

//void pushPukkaInternal(pukkaList* pl, )

#endif
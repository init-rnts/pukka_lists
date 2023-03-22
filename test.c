#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

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

} pukkaList;

pukkaList* createPukkaList();
void pushPukka(pukkaList*, int);

int main() {

	pukkaList* sample = createPukkaList();

	pushPukka(sample, 5);
	pushPukka(sample, 10);

	struct Node* ptrn = sample->headNode;
	int* ptri = ptrn->data;
	struct Node* ptrn2 = sample->endNode;
	int* ptri2 = ptrn2->data;

	printf("%d\n", *ptri);
	printf("%d\n", *ptri2);

	_getche();
	return 0;
}

pukkaList* createPukkaList() {

	//Allocate memory for the list and define pointers of the list as null.

	pukkaList* pl = malloc(sizeof(pukkaList));
	pl->headNode = NULL;
	pl->endNode = NULL;

	return pl; //Return the pointer of the allocated memory.

}

void pushPukka(pukkaList* pl, int i) {

	/*Allocate memory for the new node. Then allocate memory for new data and write the new data in it. 
	Finally the pointer member of new node which points to data is defined as pointer of new data.*/

	struct Node* ptrn = malloc(sizeof(struct Node));
	int* ptri = malloc(sizeof(int));
	*ptri = i;
	ptrn->data = ptri;

	if (pl->headNode == NULL) {
		pl->headNode = ptrn;
	}

	pl->endNode = ptrn;
}
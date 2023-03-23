#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define pushPukka(X, Y) _Generic((Y), int: pushPukkai, float: pushPukkaf, double: pushPukkad, \
									  char*: pushPukkas)(X, Y)

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

pukkaList* createPukkaList();	 //Function to create a pukkaList which actually is a pointer to a pukkaList.

//Functions to add data to last of the list.
void pushPukkai(pukkaList*, int);
void pushPukkaf(pukkaList*, float);
void pushPukkad(pukkaList*, double);
void pushPukkas(pukkaList*, char[]);
void pushPukkas(pukkaList*, int[]);
void pushPukkas(pukkaList*, char[]);
void pushPukkas(pukkaList*, double[]);

int main() {

	pukkaList* sample = createPukkaList();

	int a = 5;
	float b = 3.256789;
	double c = 124.8234545678900;

	pushPukka(sample, a);
	pushPukka(sample, b);
	pushPukka(sample, c);
	pushPukka(sample, "Fatih");

	struct Node* ptrn = sample->headNode;
	int* ptri = ptrn->data;
	struct Node* ptrn2 = sample->endNode;
	char* ptri2 = ptrn2->data;

	printf("%d\n", *ptri);
	printf("%s\n", ptri2);

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

void pushPukkai(pukkaList* pl, int i) {

	/*Allocate memory for the new node. Then allocate memory for new data and write the new data in it. 
	Finally the pointer member of new node which points to data is defined as pointer of new data.*/

	struct Node* ptrn = malloc(sizeof(struct Node));
	int* ptri = malloc(sizeof(int));
	*ptri = i;
	ptrn->data = ptri;

	if (pl->headNode == NULL) {

		/*If new node is first then the node is determined as both head node and end node of the list and 
		the node's pointer member which points to next node is defined as null.*/

		pl->headNode = ptrn; 
		pl->endNode = ptrn;
		ptrn->nextNode = NULL;

	} else {
		
		/*Define pointer member of the last node of the list which points to next node as new node's address 
		and define the pointer member of new node which points next node's address as null. Finally the list's 
		pointer member which points the end node is changed to new node's address.*/

		struct Node* ptre = pl->endNode;
		ptre->nextNode = ptrn;
		ptrn->nextNode = NULL;
		pl->endNode = ptrn;
	}

}

void pushPukkaf(pukkaList* pl, float f) {

	/*Allocate memory for the new node. Then allocate memory for new data and write the new data in it. 
	Finally the pointer member of new node which points to data is defined as pointer of new data.*/

	struct Node* ptrn = malloc(sizeof(struct Node));
	float* ptrf = malloc(sizeof(float));
	*ptrf = f;
	ptrn->data = ptrf;

	if (pl->headNode == NULL) {

		/*If new node is first then the node is determined as both head node and end node of the list and 
		the node's pointer member which points to next node is defined as null.*/

		pl->headNode = ptrn; 
		pl->endNode = ptrn;
		ptrn->nextNode = NULL;

	} else {
		
		/*Define pointer member of the last node of the list which points to next node as new node's address 
		and define the pointer member of new node which points next node's address as null. Finally the list's 
		pointer member which points the end node is changed to new node's address.*/

		struct Node* ptre = pl->endNode;
		ptre->nextNode = ptrn;
		ptrn->nextNode = NULL;
		pl->endNode = ptrn;
	}

}

void pushPukkad(pukkaList* pl, double d) {

	/*Allocate memory for the new node. Then allocate memory for new data and write the new data in it. 
	Finally the pointer member of new node which points to data is defined as pointer of new data.*/

	struct Node* ptrn = malloc(sizeof(struct Node));
	double* ptrd = malloc(sizeof(double));
	*ptrd = d;
	ptrn->data = ptrd;

	if (pl->headNode == NULL) {

		/*If new node is first then the node is determined as both head node and end node of the list and 
		the node's pointer member which points to next node is defined as null.*/

		pl->headNode = ptrn; 
		pl->endNode = ptrn;
		ptrn->nextNode = NULL;

	} else {
		
		/*Define pointer member of the last node of the list which points to next node as new node's address 
		and define the pointer member of new node which points next node's address as null. Finally the list's 
		pointer member which points the end node is changed to new node's address.*/

		struct Node* ptre = pl->endNode;
		ptre->nextNode = ptrn;
		ptrn->nextNode = NULL;
		pl->endNode = ptrn;
	}

}

void pushPukkas(pukkaList* pl, char st[]) {
	
	/*Allocate memory for the new node. Then allocate memory for new data and write the new data in it. 
	Finally the pointer member of new node which points to data is defined as pointer of new data.*/

	size_t size = strlen(st) + 1;

	struct Node* ptrn = malloc(sizeof(struct Node));
	char* ptrs = malloc(size);
	
	for (int i=0; i<=strlen(st); i++)
		*(ptrs + i) = st[i];

	ptrn->data = ptrs;

	if (pl->headNode == NULL) {

		/*If new node is first then the node is determined as both head node and end node of the list and 
		the node's pointer member which points to next node is defined as null.*/

		pl->headNode = ptrn; 
		pl->endNode = ptrn;
		ptrn->nextNode = NULL;

	} else {
		
		/*Define pointer member of the last node of the list which points to next node as new node's address 
		and define the pointer member of new node which points next node's address as null. Finally the list's 
		pointer member which points the end node is changed to new node's address.*/

		struct Node* ptre = pl->endNode;
		ptre->nextNode = ptrn;
		ptrn->nextNode = NULL;
		pl->endNode = ptrn;
	}

}

void pushPukkaia(pukkaList* pl, int arr[]) {
	
	/*Allocate memory for the new node. Then allocate memory for new data and write the new data in it. 
	Finally the pointer member of new node which points to data is defined as pointer of new data.*/

	size_t size = strlen(st) + 1;

	struct Node* ptrn = malloc(sizeof(struct Node));
	char* ptrs = malloc(size);
	
	for (int i=0; i<=strlen(st); i++)
		*(ptrs + i) = st[i];

	ptrn->data = ptrs;

	if (pl->headNode == NULL) {

		/*If new node is first then the node is determined as both head node and end node of the list and 
		the node's pointer member which points to next node is defined as null.*/

		pl->headNode = ptrn; 
		pl->endNode = ptrn;
		ptrn->nextNode = NULL;

	} else {
		
		/*Define pointer member of the last node of the list which points to next node as new node's address 
		and define the pointer member of new node which points next node's address as null. Finally the list's 
		pointer member which points the end node is changed to new node's address.*/

		struct Node* ptre = pl->endNode;
		ptre->nextNode = ptrn;
		ptrn->nextNode = NULL;
		pl->endNode = ptrn;
	}

}

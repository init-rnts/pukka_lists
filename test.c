#include "pukka.h"

int main () {

    pukkaList* sample = createPukkaList();

    pushPukka(sample, 5);

    int* ph1 = sample->headNode->data;
    int* pe1 = sample->endNode->data;
    struct Node* next = sample->endNode;

    printf("%d\n", *ph1);
    printf("%d\n", *pe1);
    printf("%p\n", next->nextNode);
    printf("%d\n\n", sample->length);

    pushPukka(sample, 10);

    int* ph2 = sample->headNode->data;
    int* pe2 = sample->endNode->data;

    printf("%d\n", *ph2);
    printf("%d\n", *pe2);
    printf("%p\n", next->nextNode);
    printf("%d\n\n", sample->length);

    pushPukka(sample, 15);

    int* ph3 = sample->headNode->data;
    int* pe3 = sample->endNode->data;

    printf("%d\n", *ph3);
    printf("%d\n", *pe3);
    printf("%d\n\n", sample->length);



    getch();
    return 0;
}
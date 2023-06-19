#include <stdio.h>
#include <conio.h>
#include "pukka.h"

typedef struct x {
    int i;
    double d;
} x;

int main () {

    pukkaList* sample = createPukkaList(x);

    printf("Liste olusturuldu...\n");
    printf("%p\n", sample->headNode);
    printf("%p\n", sample->endNode);
    printf("%d\n", sample->element_size);
    printf("%d\n\n", sample->length);

    x firstref = {5, 5.1};

    pushPukka(sample, firstref);

    printf("Listenin ilk elemani eklendi...\n");
    printf("%p\n", sample->headNode);
    printf("%p\n", sample->endNode);
    printf("%d\n", sample->element_size);
    printf("%d\n\n", sample->length);

    x medref = {10, 10.1};

    pushPukka(sample, medref);

    printf("Listenin ikinci elemani eklendi...\n");
    printf("%p\n", sample->headNode);
    printf("%p\n", sample->endNode);
    printf("%d\n", sample->element_size);
    printf("%d\n\n", sample->length);

    x lastref = {15, 15.1};

    pushPukka(sample, lastref);

    printf("Listenin ucuncu elemani eklendi...\n");
    printf("%p\n", sample->headNode);
    printf("%p\n", sample->endNode);
    printf("%d\n", sample->element_size);
    printf("%d\n\n", sample->length);

    x* first = (x*)(sample->headNode->data);
    x* last = (x*)(sample->endNode->data);

    printf("Listenin ilk elemani ve son elemani aktarildi...\n");
    printf("%d\n", first->i);
    printf("%lf\n", first->d);
    printf("%d\n", last->i);
    printf("%lf\n\n\n", last->d);

    x addedToEnd = {99, 99.9};

    addPukkaAt(sample, addedToEnd, 3);

    printf("Listenin sonuna eleman eklendi...\n");
    printf("%p\n", sample->headNode);
    printf("%p\n", sample->endNode);
    printf("%d\n", sample->element_size);
    printf("%d\n\n", sample->length);

    first = (x*)(sample->headNode->data);
    last = (x*)(sample->endNode->data);

    printf("Listenin ilk elemani ve son elemani aktarildi...\n");
    printf("%d\n", first->i);
    printf("%lf\n", first->d);
    printf("%d\n", last->i);
    printf("%lf\n\n\n", last->d);

    x addedToHead = {1, 1.1};

    addPukkaAt(sample, addedToHead, 0);

    printf("Listenin basina eleman eklendi...\n");
    printf("%p\n", sample->headNode);
    printf("%p\n", sample->endNode);
    printf("%d\n", sample->element_size);
    printf("%d\n\n", sample->length);

    first = (x*)(sample->headNode->data);
    last = (x*)(sample->endNode->data);

    printf("Listenin ilk elemani ve son elemani aktarildi...\n");
    printf("%d\n", first->i);
    printf("%lf\n", first->d);
    printf("%d\n", last->i);
    printf("%lf\n\n\n", last->d);

    x addedTo3 = {33, 33.3};

    addPukkaAt(sample, addedTo3, 3);

    printf("Listenin ucuncu indexine eleman eklendi...\n");
    printf("%p\n", sample->headNode);
    printf("%p\n", sample->endNode);
    printf("%d\n", sample->element_size);
    printf("%d\n\n", sample->length);

    first = (x*)(sample->headNode->data);
    last = (x*)(sample->endNode->data);

    printf("Listenin ilk elemani ve son elemani aktarildi...\n");
    printf("%d\n", first->i);
    printf("%lf\n", first->d);
    printf("%d\n", last->i);
    printf("%lf\n\n\n", last->d);

    getch();
    return 0;
}
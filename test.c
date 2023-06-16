#include <stdio.h>
#include <conio.h>
#include "pukka3.h"

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

    popPukka(sample);

    printf("Listenin ucuncu elemani atildi...\n");
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

    popPukka(sample);

    printf("Listenin ikinci elemani atildi...\n");
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

    popPukka(sample);

    printf("Listenin birinci elemani atildi...\n");
    printf("%p\n", sample->headNode);
    printf("%p\n", sample->endNode);
    printf("%d\n", sample->element_size);
    printf("%d\n\n", sample->length);

    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>
#include "pukka2.h"

typedef struct x {
    int i;
    double d;
} x;

int main () {

    pukkaList* sample = createPukkaList(x);

    printf("%d\n", sample->element_size);
    printf("%d\n", sample->length);
    printf("%p\n", sample->headNode);
    printf("%p\n\n", sample->endNode);

    x abc = {15, 5.2};

    printf("%p\n\n", &abc);

    pushPukka(sample, 15);

    printf("%d\n", sample->element_size);
    printf("%d\n", sample->length);
    printf("%p\n", sample->headNode);
    printf("%p\n\n", sample->endNode);

    x* xyz = sample->headNode->data;

    printf("%d\n", xyz->i);
    printf("%lf\n", xyz->d);
/*
    pushPukka(sample, 15);
    
    printf("%d\n\n", *(int*)(sample->endNode->data));
*/
    getch();
    return 0;
}
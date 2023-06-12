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

    x abc = {15, 5.2}

    pushPukka(sample, abc);

    getch();
    return 0;
}
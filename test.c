#include <stdio.h>
#include <conio.h>
#include "pukka2.h"

struct x {
    int i;
    double d;
} x;

int main () {

    pukkaList sample = createPukkaList(5.12);

    printf("%d\n", sample.element_size);
    printf("%d\n", sample.length);
    printf("%p\n", sample.headNode);
    printf("%p\n\n", sample.endNode);

    getch();
    return 0;
}
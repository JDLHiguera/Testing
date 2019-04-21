#include<stdio.h>
#include "utilidades.h"


void flush_in(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}
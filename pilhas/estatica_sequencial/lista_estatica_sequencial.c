#include <stdio.h>
#include <stdlib.h>

#define TAM 10


typedef struct Pilha {
    int dado[TAM];
    int topo;
} Pilha;

// Create

Pilha *create () {
    Pilha *p = malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}

// Push

// Seek

// Pop

// isEmpty?


int main () {
    Pilha *p = create();

    printf("topo: %d\n", p->topo);



    return 0;
}
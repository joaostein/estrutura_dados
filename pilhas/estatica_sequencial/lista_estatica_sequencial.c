#include <stdio.h>
#include <stdlib.h>

#define TAM 3


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

void push (Pilha *p, int dado) {
    if (p->topo >= TAM - 1) {
        printf("Impossível adicionar novo elemento. A Pilha está totalmente cheia\n");
    } else {
        p->topo ++;
        p->dado[p->topo] = dado;
    }
}

// Seek

// Pop

// isEmpty?


int main () {
    
    Pilha *p = create();

    push(p, 15);
    
    printf("topo[0]: %d\n", p->dado[0]);



    return 0;
}
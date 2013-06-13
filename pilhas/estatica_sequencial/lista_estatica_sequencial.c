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

int seek (Pilha *p) {
    if (p->topo == -1) {
        printf("A lista está vazia, não existe elementos nela.\n");
    } else {
        int dado;
        dado = p->dado[p->topo];
        return dado;
    }
}


// Pop

// isEmpty?


int main () {
    
    Pilha *p = create();

    push(p, 182);
    
    printf("topo[0]: %d\n", seek(p));



    return 0;
}
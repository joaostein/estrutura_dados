#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    struct No *esq;
    struct No *dir;
    int dado;
} No;

// Create

No *create () {
    return NULL;
}

// Push

void push (No **raiz, int elemento) {
    // Lista vazia
    if (*raiz == NULL) {
        *raiz = malloc(sizeof(No));
        (*raiz)->dado = elemento;
        (*raiz)->esq = NULL;
        (*raiz)->dir = NULL;
    }

    // Árvore populada. Elemento a ser inserido menor que raiz.
    if (elemento < (*raiz)->dado) {
        push(&((*raiz)->esq), elemento);
    }

    //  Árvore populada. Elemento a ser inserido mairo que raiz.
    if (elemento > (*raiz)->dado) {
        push(&((*raiz)->dir), elemento);
    }
    


}


// Pop

// Search


int main () {

    No *raiz = create();
    push(&raiz, 10);

    return 0;
}
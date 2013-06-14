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

// Search

No *search (No *raiz, int elemento) {
    // Lista vazia
    if (raiz == NULL ) {
        printf("Não foi possível encontrar elemento.\n");
        return NULL;
    }

    // Árvore populada. Apenas existe um elemento que é a raiz.
    if (elemento == raiz->dado) {
        return raiz;
    }

    // Árvore populada. Elemento a ser buscado menor que raiz.
    if (elemento < raiz->dado) {
        return search(raiz->esq, elemento);
    }

    // Árvore populada. Elemento a ser buscado menor que raiz.
    if (elemento > raiz->dado) {
        return search(raiz->dir, elemento);
    }
}

// Remove



int main () {

    No *raiz = create();
    push(&raiz, 5);
    push(&raiz, 3);
    push(&raiz, 2);
    push(&raiz, 7);
    push(&raiz, 6);
    push(&raiz, 8);
    push(&raiz, 10);

    pop(&raiz, )

    No *elemento = search(raiz, 6);
    if (elemento != NULL) {
        printf("Elemento buscado: %d\n", elemento->dado);
    }

    return 0;
}
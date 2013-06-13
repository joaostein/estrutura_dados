#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

typedef struct Fila {
    int elemento[TAMANHO];
    int inicio, tamanho;
} Fila;

// Create (Cria a fila)

Fila *create () {
    Fila *f = malloc(sizeof(Fila));
    f->inicio = 0;
    f->tamanho = 0;

    return f;
}


// Push (Adiciona um elemento ao final da fila - FIFO [First in, First Out])

// Pop (Remove o elemento que se encontra no início da fila)

// Seek (Retorna o valor que está no início da fila)

// isEmpty? (Verifica se a fila está vazia)


int main () {

    Fila *f = create();

    return 0;
}
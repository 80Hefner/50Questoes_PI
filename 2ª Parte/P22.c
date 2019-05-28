#include "tipos.h"

// Defina uma função int listToArray (LInt l, int v[], int N) que, dada uma lista l, preenche o array v com os elementos da lista.
// A função deverá preencher no máximo N elementos e retornar o número de elementos preenchidos.

int listToArray (LInt l, int v[], int N) {

	int x = 0, i;

	for (i = 0; l != NULL && N > 0; i++, N--, x++){
		v[i] = l->valor;
		l = l->prox;
	}

	return x;
}
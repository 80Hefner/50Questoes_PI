#include "tipos.h"

// Defina uma função int freeAB (ABin a) que liberta o espaço ocupado por uma árvore binária, retornando o número de nodos libertados.

int freeAB (ABin a) {

	int i;

	if (a == NULL)
		i = 0;
	else {

		i = 1 + freeAB(a->esq) + freeAB(a->dir);
		free (a);
	}

	return i;
}
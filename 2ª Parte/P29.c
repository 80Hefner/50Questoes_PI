#include "tipos.h"

// Defina uma função ABin cloneAB (ABin) que cria uma cópia de uma árvore.

ABin cloneAB (ABin a) {

	ABin novo;

	if (a == NULL)
		novo = NULL;
	else {
		novo = newABin (a->valor, cloneAB(a->esq), cloneAB(a->dir));		
	}

	return novo;
}
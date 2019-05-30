#include "tipos.h"

// Defina uma função void mirror (ABin *) que inverte uma árvore (sem criar uma nova árvore).

void mirror (ABin * a) {

	ABin aux;

	if (*a == NULL) return;

	aux = (*a)->dir;
	(*a)->dir = (*a)->esq;
	(*a)->esq = aux;

	mirror (&((*a)->esq));
	mirror (&((*a)->dir));
	
	return;
}
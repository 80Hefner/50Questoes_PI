#include "tipos.h"

// Apresente uma definição não recursiva da função int addOrd (ABin *a, int x) que adiciona um elemento a uma árvore binária de procura.
// A função deverá retornar 1 se o elemento a inserir já existir na árvore ou 0 no outro caso.

int addOrd (ABin *a, int x) {

	int i = 0;

	while (*a != NULL && i == 0) {
		if (x == (*a)->valor)
			i = 1;
		else if (x > (*a)->valor)
			a = &((*a)->dir);
		else
			a = &((*a)->esq);
	}

	if (*a == NULL)
		*a = newABin (x, NULL, NULL);

	return i;
}
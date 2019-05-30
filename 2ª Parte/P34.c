#include "tipos.h"

// Apresente uma definição da função int depth (ABin a, int x) que calcula o nível (menor) a que um elemento está numa árvore
// binária (-1 caso não exista).

int depth (Abin a, int x) {

	int i = 1;

	if (a == NULL)
		i =  -1;
	else if (a->valor == x) {
		i = 1;
	}
	else {

		int esq = depth (a->esq, x);
		int dir = depth (a->dir, x);

		if (esq == -1 && dir == -1)
			i = -1;
		else if (esq == -1 && dir != -1)
			i += dir;
		else if (esq != -1 && dir == -1)
			i += esq;
		else {
			if (esq < dir)
				i += esq;
			else
				i += dir;
		}
	}

	return i;

}
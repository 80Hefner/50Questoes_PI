#include "tipos.h"

// Apresente uma definição da função int quantosMaiores (ABin a, int x) que, dada uma árvore binária de procura de inteiros e um
// inteiro, conta quantos elementos da árvore são maiores que o inteiro dado.

int quantosMaiores (ABin a, int x) {

	int i = 0;

	if (a != NULL) {
		if (a->valor > x)
			i = 1;

		i += quantosMaiores (a->esq, x) + quantosMaiores (a->dir, x);
	}

	return i;
}
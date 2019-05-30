#include "tipos.h"

// Apresente uma definição da função int depthOrd (ABin a, int x) que calcula o nível a que um elemento está numa árvore binária
// de procura (-1 caso não exista).

int depthOrd (ABin a, int x) {

	int i = 1;

	while (a != NULL) {
		if (x == a->valor)
			return i;
		else if (x > a->valor) {
			a = a->dir;
			i++;
		}
		else {
			a = a->esq;
			i++;
		}
	}

	return -1;
}
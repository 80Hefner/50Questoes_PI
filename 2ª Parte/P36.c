#include "tipos.h"

// Defina uma função int pruneAB (ABin *a, int l) que remove (libertando o espaço respetivo) todos os elementos da árvore *a que estão
//a uma profundidade superior a l, retornando o número de elementos removidos.
// Assuma que a profundidade da raíz da árvore é 1, e por isso a invocação pruneAB(&a,0) corresponde a remover todos os elementos da árvore a.

int pruneAB (ABin *a, int l) {

	if (*a == NULL) return 0;

	int x = 0;

	x += pruneAB (&((*a)->esq), l-1);
	x += pruneAB (&((*a)->dir), l-1);

	if (l < 1) {
		free (*a);
		x++;
		*a = NULL;
	}
	else if (l == 1) {
		(*a)->esq = NULL;
		(*a)->dir = NULL;
	}

	return x;
}